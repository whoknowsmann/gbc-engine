#ifndef ENGINE_CORE_INPUT_H
#define ENGINE_CORE_INPUT_H

#include <gb/gb.h>

void input_update(void);
UINT8 input_pressed(UINT8 mask);
UINT8 input_held(UINT8 mask);

#endif
