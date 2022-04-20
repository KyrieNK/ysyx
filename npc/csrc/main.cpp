#include <iostream>
#include <fstream>

#include "verilated.h"          
#include "verilated_vcd_c.h"    
#include "verilated_dpi.h"

#include "Vysyx22040413_SingleCpu.h"

using namespace std;

static Vysyx22040413_SingleCpu* top;
static VerilatedVcdC* tfp;
static vluint64_t main_time = 0;
static const vluint64_t sim_time = 1000;

int rom[65536];

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

void read_inst( char* filename)
{
  FILE *fp = fopen(filename, "rb");
  if( fp == NULL ) {
		printf( "Can not open this file!\n" );
		exit(1);
  }
  
  fseek(fp, 0, SEEK_END);
  size_t size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  size = fread(rom, size, 1, fp);
  fclose(fp);
}


// void rom_init(void){
// 	//inst 1
// 	rom[0] = 0x93;
// 	rom[1] = 0x00;
// 	rom[2] = 0x10;
// 	rom[3] = 0x00;
// 	//inst 2
// 	rom[4] = 0x93;
// 	rom[5] = 0x00;
// 	rom[6] = 0x20;
// 	rom[7] = 0x00;
// 	//inst 3
// 	rom[8] = 0x93;
// 	rom[9] = 0x00;
// 	rom[10] = 0x30;
// 	rom[11] = 0x00;

// }

// int pmem_read(int addr){
// 	int inst = 0;
// 	char *pBuf = (char *)&inst;
// 	pBuf[0] = rom[addr];
// 	pBuf[1] = rom[addr+1];
// 	pBuf[2] = rom[addr+2];
// 	pBuf[3] = rom[addr+3];
// 	printf("inst[%d] : 0x%x\n", addr, inst);
// 	return inst;
// }

int main(int argc, char **argv)
{
  int inst_num = 0;

  char filename[100];
  //printf("Please enter your filename~\n");
  //cin >> filename;
  read_inst("../am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin");
  //read_inst("/home/kyrie/ysyx-workbench/npc/csrc/inst.bin");

  // initialization
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  top = new Vysyx22040413_SingleCpu;
  tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("obj_dir/top.vcd");
	
	while( !Verilated::gotFinish() && main_time < sim_time )
	{
	  if( main_time % 10 == 0 ) top->clk = 0;
	  if( main_time % 10 == 5 ) top->clk = 1;
		  
	  if( main_time < 10 )
	  {
		top->rst = 1;
	  }
	  else
	  {
	    top->rst = 0;
		if( main_time % 10 == 5 ){//上升沿
        top->inst = (top->inst_ena == 1) ? rom[ (top->pc) >> 2 ] : 0;
        dump_gpr();
        printf("===================\n");
      }
	  }
	  top->eval();
	  tfp->dump(main_time);
	  main_time++;
	}
		
  // clean
  tfp->close();
  delete top;
  delete tfp;
  exit(0);
  return 0;
}
