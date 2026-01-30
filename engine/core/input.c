#include "engine/core/input.h"

static UINT8 input_current = 0;
static UINT8 input_previous = 0;

void input_update(void) {
  input_previous = input_current;
  input_current = joypad();
}

UINT8 input_pressed(UINT8 mask) {
  return (input_current & mask) && !(input_previous & mask);
}

UINT8 input_held(UINT8 mask) {
  return (input_current & mask);
}
