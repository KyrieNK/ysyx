#include "sdb.h"
#include "monitor/watchpoint.h"
#define NR_WP 32



static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP * new_wp(){
  WP * temp = free_;
  if(free_ == NULL){
    printf("[ERROR!] There is no free wp!\n");
    return false;
  }

  free_ = free_->next;

  temp->next = head;
  head = temp;

  return temp;
}

bool free_wp(int N){

  // delete 
  WP * delete = head;
  WP * pre_delete = head;

  if(delete == NULL){
    printf("[ERROR!] Delete %d Watchpoint is NULL!\n",N);
    return false;
  }

  while(delete){
    if(delete->NO == N) break;
    delete = delete->next;
  }

  while(pre_delete){
    if(pre_delete->next == delete) break;
    pre_delete = pre_delete->next;
  }

  if(delete == head){
    head = NULL;
  }else{
    pre_delete->next = delete->next;      
  }

  // add to free_wp
  delete->next = free_;
  free_ = delete;
  
  printf("Delete %d Watchpoint Success\n",N);
  return true;
}

void display_watchpoints(){
  WP * wp = head;
  if(head == NULL) {
    printf("No watchpoints\n");
  }

  else{
    do{
      printf("Hardware watchpoint %d: %s\n",wp->NO, wp->expr);
      printf("Old value = %d\n",wp->Old_value);
      printf("New value = %d\n",wp->New_value);
      wp = wp->next;
    }while(wp != NULL);
  }
}

bool scan_watchpoints(){
  WP * wp = head;
  bool success;
  if(head == NULL) {
    return false;
  }

  int New_value = expr(wp->expr,&success);
  
  if (success && New_value != wp->New_value) {			
    /* print the watchpoint infomation */

    printf("watchpoint No.%d\n", wp->NO);	
    printf("watchpoint Expr:\t%s\n", wp->expr);
    printf("watchpoint Old_value:\t%d\n", wp->Old_value);
    printf("watchpoint New_value:\t%d\n", New_value);

    /* update the old_value and the new_value */

    wp->Old_value = wp->New_value;
    wp->New_value = New_value;
    return true;			
  }

  return false;
}
