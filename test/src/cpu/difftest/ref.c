#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>




static void diff_set_regs(CPU_state * dut )
{    int i;
    for (i=0;i<32;i++){
        cpu.gpr[i] =dut->gpr[i];
    }
     cpu.pc=dut->pc;
}

static void diff_get_regs(CPU_state * dut  )
{
      int i;
    for (i=0;i<32;i++){
        dut->gpr[i] =cpu.gpr[i];
    }
     dut->pc=cpu.pc;

}

//在DUT host memory的`buf`和REF guest memory的`dest`之间拷贝`n`字节,
//`direction`指定拷贝的方向, `DIFFTEST_TO_DUT`表示往DUT拷贝, `DIFFTEST_TO_REF`表示往REF拷贝
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
 size_t i;

 if (direction == DIFFTEST_TO_REF) {
  //  paddr_write (addr) ; 
 //   s->diff_memcpy(addr, buf, n);
      for(i=0;i<n;i++)
      {
      paddr_write((addr +i),1,  *((uint8_t *)(buf+i)) );
        
      }


  } else {
    printf("DIFFTEST_TO_DUT\n");
    assert(0);
  }

}
// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;

void difftest_regcpy(void *dut, bool direction) {
   if (direction == DIFFTEST_TO_REF) {
      diff_set_regs(dut);
  } else {
       diff_get_regs(dut);
  }
}
// 让REF执行`n`条指令
void difftest_exec(uint64_t n) {
  cpu_exec(n);
}
//暂时不用
void difftest_raise_intr(word_t NO) {
  assert(0);
}


// 初始化REF的DiffTest功能
void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}