#include <gb/gb.h>
#include "engine/core/input.h"
#include "engine/core/vblank.h"
#include "engine/gfx/sprite.h"
#include "game/scenes.h"

void main(void) {
  DISPLAY_OFF;
  sprite_init();
  vblank_init();
  scene_set(&scene_title);
  DISPLAY_ON;

  while (1) {
    input_update();
    scene_update();
    scenes_handle_requests();
    vblank_wait();
  }
}
