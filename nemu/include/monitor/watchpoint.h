#ifndef __WATCHPOINT_H__
#define __WATCHPOINT_H__

#include "common.h"

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expr[65536];

  int Old_value;
  int New_value;
} WP;

void init_wp_pool();
WP * new_wp();
bool free_wp(int N);
void display_watchpoints();
bool scan_watchpoints();

#endif
