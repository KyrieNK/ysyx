#include <iostream>
#include <fstream>

#include "verilated.h"          
#include "verilated_vcd_c.h"    

#include "svdpi.h"
#include "Vysyx22040413_SingleCpu.h"
#include "Vysyx22040413_SingleCpu__Dpi.h"

using namespace std;

static Vysyx22040413_SingleCpu* dut;
static VerilatedVcdC* tfp;
static vluint64_t main_time = 0;
static const vluint64_t sim_time = 1000;

int rom[65536];

void rom_init(void){
	//inst 1
	rom[0] = 0x93;
	rom[1] = 0x00;
	rom[2] = 0x10;
	rom[3] = 0x00;
	//inst 2
	rom[4] = 0x93;
	rom[5] = 0x00;
	rom[6] = 0x20;
	rom[7] = 0x00;
	//inst 3
	rom[8] = 0x93;
	rom[9] = 0x00;
	rom[10] = 0x30;
	rom[11] = 0x00;

}

int pmem_read(int addr){
	int inst = 0;
	char *pBuf = (char *)&inst;
	pBuf[0] = rom[addr];
	pBuf[1] = rom[addr+1];
	pBuf[2] = rom[addr+2];
	pBuf[3] = rom[addr+3];
	printf("inst[%d] : 0x%x\n", addr, inst);
	return inst;
}

int main(int argc, char **argv)
{
  int inst_num = 0;
  rom_init();

  // initialization
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  dut = new Vysyx22040413_SingleCpu;
  tfp = new VerilatedVcdC;

  dut->trace(tfp, 99);
  tfp->open("obj_dir/dut.vcd");

//   svBit value;
//   //svSetScope(svGetScopeFromName("TOP.dut"));
//   svScope scope = svGetScope();
//   svGetNameFromScope(scope);
//   publicSetBool(value);

	while( !Verilated::gotFinish() && main_time < sim_time && inst_num <= 3)
	{
	  if( main_time % 10 == 0 ) dut->clk = 0;
	  if( main_time % 10 == 5 ) dut->clk = 1;
		  
	  if( main_time < 10 )
	  {
		dut->rst = 1;
	  }
	  else
	  {
	    dut->rst = 0;
		if( main_time % 10 == 5 ){
			inst_num ++;
			dut->inst = (dut->inst_ena == 1) ? pmem_read(dut->pc) : 0;
		}
	  }
	  dut->eval();
	  tfp->dump(main_time);
	  main_time++;
	}
		
  // clean
  tfp->close();
  delete dut;
  delete tfp;
  exit(0);
  return 0;
}
