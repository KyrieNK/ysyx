#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

/*
* TIPE_I: addi、ld
* TYPE_U: auipc、
* TYPE_S：sd 
* TYPE_UJ: jal
* mv li ret
*/

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_R,
  TYPE_UJ,
  TYPE_SB,
  TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)
word_t offset;

static word_t immI(uint32_t i) 
{ 
  if(BITS(i, 14, 12) == 5) {//srai
    printf("srai\n");
    return BITS(i, 25, 20); 
  } 
  if(BITS(i, 14, 12) == 1) {//slli
    printf("slli\n");
    return BITS(i, 25, 20); 
  } 
  if(BITS(i, 14, 12) == 1) {//srli
    printf("srli\n");
    return BITS(i, 25, 20); 
  } 
  return SEXT(BITS(i, 31, 20), 12); 
}
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
//static word_t _immUJ(uint32_t i) {return SEXT(BITS(i, 31, 12), 20);}
static word_t immUJ(uint32_t i) {
  // word_t imm_1 = SEXT(BITS(i, 31, 31),1) << 20;
  // word_t imm_2 = SEXT(BITS(i, 30, 21),12) << 1;
  // word_t imm_3 = SEXT(BITS(i, 20, 20),1) << 11;
  // word_t imm_4 = SEXT(BITS(i, 19, 12),8) << 12;
  word_t imm_1 = BITS(i, 31, 31) << 20;
  word_t imm_2 = BITS(i, 30, 21) << 1;
  word_t imm_3 = BITS(i, 20, 20) << 11;
  word_t imm_4 = BITS(i, 19, 12) << 12;
  // printf("imm_1 == %lx\n",imm_1);
  // printf("imm_2 == %lx\n",imm_2);
  // printf("imm_3 == %lx\n",imm_3);
  // printf("imm_4 == %lx\n",imm_4);
  return SEXT((imm_1 | imm_2 | imm_3 | imm_4),21);
}
static word_t immSB(uint32_t i){
  // word_t imm_1 = SEXT(BITS(i, 31, 31),1) << 12;
  // word_t imm_2 = SEXT(BITS(i, 30, 25),6) << 5;
  // word_t imm_3 = SEXT(BITS(i, 11, 8),4) << 1;
  // word_t imm_4 = SEXT(BITS(i, 7, 7),1) << 11;
  word_t imm_1 = BITS(i, 31, 31) << 12;
  word_t imm_2 = BITS(i, 30, 25) << 5;
  word_t imm_3 = BITS(i, 11, 8) << 1;
  word_t imm_4 = BITS(i, 7, 7) << 11;
  printf("imm_1 == %lx\n",imm_1);
  printf("imm_2 == %lx\n",imm_2);
  printf("imm_3 == %lx\n",imm_3);
  printf("imm_4 == %lx\n",imm_4);
  offset = SEXT((imm_1 | imm_2 | imm_3 | imm_4),13);
  return offset;
}


static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  static int k = 1;
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_R: src1R(rs1); src2R(rs2); printf("pc:%lx TYPE_R\n",s->pc);break;
    case TYPE_I: src1R(rs1);     src2I(immI(i)); printf("pc:%lx TYPE_I\n",s->pc);break;
    case TYPE_U: src1I(immU(i)); printf("pc:%lx TYPE_U\n",s->pc);break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2);printf("pc:%lx TYPE_S\n",s->pc);break;
    case TYPE_UJ: src1I(immUJ(i)); printf("pc:%lx TYPE_UJ\n",s->pc);break;
    case TYPE_SB: src1R(rs1); src2R(rs2); immSB(i); printf("pc:%lx TYPE_SB\n",s->pc);break;
    //case TYPE_LI: src1I(immI(i)); break;
  }
  k++;
}
//| (SEXT(BITS(SEXT(BITS(i, 31, 12), 20),18, 11)) << 12) | (SEXT(BITS(SEXT(BITS(i, 31, 12), 20),10, 10)) << 11) (SEXT(BITS(SEXT(BITS(i, 31, 12), 20),9, 0)) << 1)

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , UJ, R(dest) = s->pc + 4,s->dnpc = s->pc + src1);
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->pc + 4,s->dnpc = src1 + src2);
  
  //add.c
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(BITS(Mr(src1 + src2, 4),31,0),32));
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2,31,0),32));
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < ((unsigned)src2)) ? 1 : 0);//??
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , SB, if(src1 == src2) s->dnpc = s->pc + offset,printf("beq offset:%lx\n",offset));
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , SB, if(src1 != src2) s->dnpc = s->pc + offset,printf("bne offset:%lx\n",offset));
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1 + src2,31,0),32));
  
  //add-longlong.c
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);

  //bit.c
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = (signed)src1 >> src2);
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1));//?
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(BITS(src1 << BITS(src2, 4, 0),31,0),32));
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < ((unsigned)src2)) ? 1 : 0);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);

  //bubble-sort
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << src2);
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = src1 >> (unsigned)src2);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , SB, if((signed)src1 >= (signed)src2) s->dnpc = s->pc + offset,printf("bge offset:%lx\n",offset));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2));

  //printf("before ebreak\n");
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
