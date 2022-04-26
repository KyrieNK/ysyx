#include <am.h>
#include <amdev.h>
#include <nemu.h>
#include <klib.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

static inline int min(int x, int y) {
  return (x < y) ? x : y;
}

void __am_gpu_init() {
  int i;
  int w = 400;  // TODO: get the correct width
  int h = 300;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  // *cfg = (AM_GPU_CONFIG_T) {
  //   .present = true, .has_accel = false,
  //   .width = 0, .height = 0,
  //   .vmemsz = 0
  // };
  uint32_t screen_info = inl(VGACTL_ADDR);

  cfg->width  = screen_info >> 16;
  cfg->height = screen_info & 0x0000ffff;;

}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  // int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  // int W_s = 400;
  // int H_s = 300;
  // uint32_t *pixels = ctl->pixels;

  // //int cp_bytes = sizeof(uint32_t) * min(w, W_s- x);
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;

  // // for (int j = 0; j < h && y + j < H_s; j++){
  // //   memcpy(&fb[(y + j) * W_s+ x], pixels, cp_bytes);
  // //   pixels += w;
  // // }
  // for (i = 0; i < w * h; i ++) fb[i] = pixels;

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
