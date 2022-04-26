#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";


uint32_t choose(uint32_t n) {
	return rand() % n;	
}

void gen_num() {
	char s[4];
	uint32_t n = choose(99);
	
	/* send the formatted data to string */
	sprintf(s, "%u", n);
	strcat(buf, s);		
}

void gen(char str) {
	/* generate random white space */
	uint32_t lSpace = 1;
	uint32_t rSpace = 0;
	
	char s[lSpace + 1 + rSpace];

	uint32_t i=0;

	s[i++] = str;

  s[lSpace + rSpace] = '\0';	
	strcat(buf, s);

}

void gen_rand_op() {

	switch (choose(7)) {
		case 0: gen('+'); break;
		case 1: gen('-'); break;
		case 2: gen('*'); break;
    case 3: gen('/'); break;
		case 4: gen('!'); gen('=');break;
    case 5: gen('='); gen('=');break;
    case 6: gen('&'); gen('&');break;
    //case 7: gen('$'); break;
	}	
}

void gen_rand_expr() {
  
  switch(choose(3)) {
	case 0: gen_num(); break;
	case 1: gen('('); gen_rand_expr(); gen(')'); break;
	default:  gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break; 
  
  }

}

// void gen_space(){
//   /* generate random white space */
//   uint32_t Space = choose(4);

//   char s[Space + 1];
//   uint32_t i;

// 	for (i = 0; i < lSpace; i++) s[i] = ' ';
//   s[Space + 1] = '\0';
//   strcat(buf, s);
// }


int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    memset(buf, '\0', 65535);

    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint32_t result;
    int fsn = fscanf(fp, "%d", &result);
    //printf("[loop %d] fsn = %d\t", i, fsn);
    fsn = fsn;
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
