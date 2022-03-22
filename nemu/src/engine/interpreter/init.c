#include <cpu/cpu.h>

void sdb_mainloop();
void sdb_set_batch_mode();
void expr_loop();

void engine_start() {
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else

  //sdb_set_batch_mode();
  sdb_mainloop();
  //expr_loop();

#endif
}
