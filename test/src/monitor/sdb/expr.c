#include <isa.h>
#include <common.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#define REG_REGEX "^\\$0|^\\$ra|^\\$[sgt]p|^\\$t[0-6]|^\\$s[0-9]|^\\$s1[01]|^\\$a[0-7]|^\\$\\$0" 

uint32_t vaddr_read(paddr_t addr, int len);

typedef struct lineStack{
    char data;
    struct lineStack * next;
}lineStack;


uint32_t eval(int p, int q);
lineStack* push(lineStack * stack,char a);
lineStack * pop(lineStack * stack,bool *success);

extern bool is_zeros;

enum {
  TK_NOTYPE = -1,  

  /* TODO: Add more token types */
  /* According to operator priority*/
  
  TK_NEG,

  /* Level 1*/
  TK_MULTI, 
  TK_DIV, 
  /* Level 1*/
  TK_PLUS, 
  TK_SUB, 
  /* Level 2*/
  TK_EQ, 
  TK_NEQ,
  /* Level 3*/
  TK_AND, 
  
  /* others */
  TK_HNUM,
  TK_DNUM,
  TK_REG,
  TK_DEREF,
  
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},   // spaces
  {"\\+", '+'},    // plus
  {"==",TK_EQ},        // equal  
  {"-", '-'},       // substract
  {"\\*", '*'},   // multiply
  {"\\/", '/'},       // divide
  {"\\(", '('},        // left bracket 
  {"\\)", ')'},        // right bracket
  {REG_REGEX, TK_REG}, // regex for x86 register
  {"\\b0[xX][0-9a-fA-F]+\\b", TK_HNUM}, // hexadecimal-number
  {"\\b[0-9]+\\b", TK_DNUM},    // number 
  {"!=", TK_NEQ},		// not equal
  {"&&", TK_AND},		// &&
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
//static int index = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  int j;
  for (j = 0;j < NR_REGEX; j ++) {
	  memset(tokens[j].str, '\0', 65536);
	  tokens[j].type = 0; 
  }

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);

         position += substr_len;
         //printf("[LOOP %d] substr_start:%s\n",i,substr_start);

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if (rules[i].token_type == TK_NOTYPE) {
            break;
        }

        switch (rules[i].token_type) {
          case TK_DNUM:	
          case TK_HNUM:			
                    if(substr_len > 32) {
                      printf("ERROR! the length of num in this expr is longer than 32 bit\n");
                      assert(0);	
                    }
          case '+':
          case '-':
          case '*':
          case '/':
          case '(':
          case ')': 
          
          case TK_EQ:
          case TK_REG:
          case TK_NEQ:
          case TK_AND:          
                  tokens[nr_token].type = rules[i].token_type;
                  strncpy(tokens[nr_token].str,substr_start,substr_len);
                  break;
          default:break;
        }

        nr_token ++;
        break;
      }
    }
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  //printf("nr_token == %d \n",nr_token-1);
  // for(int j = 0; j<nr_token; j++){
  //   printf("tokens[%d].type = %c\n",j,tokens[nr_token].type);
  // }
  return true;
}

bool certain_type_for_deref(int type) {
	
	switch(type) {
		case '+':
		case '-':
		case '*':
		case '/': return true; 
		default : return false;
	}
}


bool certain_type_for_neg(int type) {
	switch(type) {
		case '+':
		case '-':
		case '*':
		case '/': 
		case '(': 
      return true; 
		default : 
      return false;
	}
}

uint32_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  *success = true;
  /* TODO: Insert codes to evaluate the expression. */
  for (int i = 0; i < nr_token; i++) {
	
	if (tokens[i].type == '-' && (i == 0 || certain_type_for_neg(tokens[i-1].type))) {
      tokens[i].type = TK_NEG; 
  	}	 

  if (tokens[i].type == '*' && (i == 0 || certain_type_for_deref(tokens[i-1].type))) {
		//printf("TK_DEREF\n");
    tokens[i].type = TK_DEREF; 
	  } 

    // if (tokens[i].type == TK_DNUM) {
    //   printf("1 TK_DNUM\n");
    // }

    // if (tokens[i].type == TK_HNUM) {
    //   printf("1 TK_HNUM\n");
    // }
  }


  return eval(0,nr_token-1);
}

bool check_parentheses(int p, int q){
  lineStack * stack = NULL;

  bool *success = malloc(sizeof(bool));

  int bracket_num = 0;//distinguish not BNF but vaild expression

  if(tokens[p].type ==  '(' && tokens[q].type == ')') {
      for(int i = p; i<= q; i++){
    
      //printf("loop:tokens[%d].str == %s\n",i,tokens[p].str);
  
      if(tokens[i].type == '('){
        stack = push(stack,'(');
        bracket_num++;
      }
      else if(tokens[i].type == ')'){
        bracket_num--;
        stack = pop(stack,success);
        if(*success == false) return false; 
        if(bracket_num == 0 && i != q)  return false; 
      }
    }
  }
  else return false;

  stack = pop(stack,success);
  if(*success == false) return true;
  else return false;

}

uint32_t eval(int p, int q) {

  if (p > q) {
    /* Bad expression */
    return 0;
  }
  else if (p == q) {
    /* Single token.
    * For now this token should be a number.
    * Return the value of the number.
    */
    uint32_t value = 0;

		 if (tokens[p].type == TK_DNUM)
			 value = strtoul(tokens[p].str, NULL, 10);
		 
		 if (tokens[p].type == TK_HNUM) {
       //printf("TK_DEREF\n");
       value = strtoul(tokens[p].str, NULL, 16);
     }
			 		 
		 if (tokens[p].type == TK_REG) {
			int i;
			for (i = 0; i< strlen(tokens[p].str); i++) 
        
        tokens[p].str[i] = tokens[p].str[i+1];
        bool success_flag = true;
        value = isa_reg_str2val(tokens[p].str, &success_flag);
		  }

     return value;
    }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
    * If that is the case, just throw away the parentheses.
    */
    return eval(p + 1, q - 1);
  }
 else {
    int i;
    int op = p;
    int in_bracket = 0;

    //int priority = 2;
    bool priority[5];
    memset(priority, false , 5);


    uint32_t val1 = 0;
    uint32_t val2 = 0;

    for(i = p; i <= q; i++){
      switch (tokens[i].type){
        /* others */
        case '(':  
          in_bracket++; 
          break;
        case ')':  
          in_bracket--; 
          break;
        /* Level 0*/
        case TK_NEG:
          if(in_bracket == 0) {  
              //printf("i = %d\n",i);
            priority[0] = true;
            op = i;
          }

          break;
        /* Level 1*/
        case '*':
        case '/':
          if(in_bracket == 0 && !priority[0] && !priority[2] && !priority[3] && !priority[4]) {  
              priority[1] = true;
              op = i;
          }
          break;
        /* Level 2*/
        case '+': 
        case '-': 
          if(in_bracket == 0 && !priority[3] && !priority[4]) {  
              priority[2] = true;
              op = i;
          }
          break;
        /* Level 3*/
        case TK_EQ: 
        case TK_NEQ:
          if(in_bracket == 0 && !priority[4]) {  
              priority[3] = true;
              op = i;
          }
          break;
        /* Level 4*/
        case TK_AND:
          if(in_bracket == 0) {  
              priority[4] = true;
              op = i;
          }
          break;
        case TK_DEREF:	
          if(in_bracket == 0 ){
           // printf("356\n");
            op = i;
          }
        break;
        default: break;
      }
     }

      if(tokens[op].type != TK_NEG){
        val1 = eval(p, op - 1);
      }
      
      val2 = eval(op + 1, q);

      switch (tokens[op].type) {
        case '+':  
          return val1 + val2;
        case '-':   
          return val1 - val2;
        case '*': 
          return val1 * val2;
        case '/': 
          if(val2 == 0) { 
            is_zeros = true;
            return 0;
          }
          // printf("val1==%u,val1==%d\n",val1,val1);
          // printf("val2==%u,val2==%d\n",val2,val2);

          if((val1 & 0x80000000) == 0x80000000 && ((val2 & 0x80000000) == 0x80000000)){
            //printf("-val1 / -val2\n");
            return -val1 / -val2;
          }
          else if((val1 & 0x80000000) == 0x80000000){
            //printf("-val1 / val2\n");
            return -val1 / val2;
          }
          else if((val2 & 0x80000000) == 0x80000000){
            //printf("val1 / -val2\n");
            return val1 / -val2;
          }

          return val1 / val2;
        case TK_EQ:
          if(val1 == val2) return 1;
          return 0;
        case TK_NEQ:
          if(val1 != val2) return 1;
          return 0;
        case TK_AND:
          if(val1 && val2) return 1;
          return 0;
        case TK_NEG:
          //printf("-val2 == %u, -val2==%d\n",-val2,-val2);
          return -val2;
        case TK_DEREF:
        //printf("addr = %x\n",val2);
        return vaddr_read(val2,4);
         
        default: assert(0);
    }
  }
}

lineStack* push(lineStack * stack,char a){
    lineStack * line=(lineStack*)malloc(sizeof(lineStack));
    line->data=a;
    line->next=stack;
    stack=line;
    return stack;
}

lineStack * pop(lineStack * stack,bool *success){
    if (stack) {
        lineStack * p=stack;
        stack=stack->next;
        *success = true;

        //printf("弹栈元素：%c ",p->data);
        if (stack) {
            //printf("栈顶元素：%c\n",stack->data);
        }else{
            //printf("栈已空\n");
        }
        free(p);
    }else{
        //printf("栈内没有元素\n");
        *success = false;
        return NULL;
    }
    return stack;
}
