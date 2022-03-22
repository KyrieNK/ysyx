#include <isa.h>
#include <common.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/vaddr.h>
#include "sdb.h"
#include "monitor/watchpoint.h"

static int is_batch_mode = false;
bool is_zeros = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if(arg == NULL){
    i = 1;  
  }
  else {
    sscanf(arg, "%d", &i);
  }

  if(i<1){
    printf("Error! single step execute count should >= 1");
  }else{
    printf("single step execute count:%d\n",i);
    cpu_exec(i);
  }

  return 0;
}


static int cmd_x(char *args){
  /* extract the first argument */
  int n;
  word_t esp;

  char *arg1 = strtok(NULL, " ");
  sscanf(arg1, "%d", &n);

  char *arg2 = strtok(NULL, " ");
  sscanf(arg2, "%lx" , &esp);

  for(; n > 0; n--){
      printf("%04lx:%04lx\n",esp,vaddr_read(esp,4));
      esp = esp + 4;
  }

  return 0; 
}
static int cmd_p(char *args){
  bool success;
  uint32_t result = expr(args, &success);
  printf("result = 0x%x %u %d\n", result, result, result);
  return 0;  
}

static int cmd_info(char *args){
  /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL){
    printf("please enter info r or info w\n");
    return 0;
  }

  if(*arg == 'r'){
    isa_reg_display();
  }else if(*arg == 'w'){
    display_watchpoints();
  }

  return 0;
}

static int cmd_d(char *args){
  /* extract the first argument */
  int num;
  char *arg = strtok(NULL, " ");

  sscanf(arg, "%d", &num);

  if(num < 0 || num > 31){
    printf("The range of N is 0 to 31!");
    return 0;
  }

  if(!free_wp(num)){
    printf("No watoints number %d\n", num);
  }

  return 0;
}

static int cmd_w(char *args){
  uint32_t value;
  char expr_s[65536];
  char *arg1 = strtok(NULL, " ");
  sscanf(arg1, "%s", expr_s);

  WP * wp = new_wp();

  bool success = true;
 
  value = expr(expr_s,&success);
  

  if(success == false){
    printf("No symbol [%s] in expression \n", expr_s);
    return 0;
  }

  wp->New_value = value;
  wp->Old_value = value;
  
  strcpy(wp->expr, expr_s);

  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Signle step execution of the program",cmd_si},
  { "info", "Print status", cmd_info},
  { "x", "Scan memory", cmd_x},
  { "p", "Expression evaluation",cmd_p},
  { "d", "Delete watchpoint",cmd_d},
  { "w", "Set watchpoint",cmd_w}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
 
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void expr_loop(){
  // if (!is_batch_mode) {
  //   return;
  // } 

  FILE *fp;
  int N = 65536;
  char str[N];
  uint32_t result;
  char *expr_s;
  char *token;
  int i = 0;

  bool *success = malloc(sizeof(bool));

  if((fp = fopen("/home/kyrie/ysyx-workbench/nemu/tools/gen-expr/build/input","r"))==NULL){
    printf("Fail to open file!");
    exit(0);
  }

    while(fgets(str, N, fp) != NULL){
        //printf("====================");
        is_zeros = false;

        token = strtok(str," ");
        sscanf(token,"%u",&result);

        expr_s = strtok(NULL,"\n");
     
        uint32_t value = expr(expr_s,success);
        ++i;
        if(*success == true){
            if(is_zeros == false){
              if(result == value) 
                printf("[SUCCESS!] [TEST %d] [expr result] %u == [calc value] %u\n",i,result,value);
              else
              printf("[ERROR!] [TEST %d] [expr result] %u ！= [calc value] %u\n",i,result,value);
            }
            else printf("[FORBIDDEN!] [TEST %d] Devide Zero\n",i);
        }
        else{
            printf("[ERROR!] [TEST %d] Not a Valid Expression\n",i);
        }

        memset(str, '\0', 65536);
    }
    fclose(fp);
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
