#include "engine/core/vblank.h"

static void vblank_isr(void) {
  // Placeholder for future vblank tasks.
}

void vblank_init(void) {
  add_VBL(vblank_isr);
  enable_interrupts();
}

void vblank_wait(void) {
  wait_vbl_done();
}
