#include "engine/gfx/sprite.h"

void sprite_init(void) {
  SPRITES_8x8;
}

void sprite_move(UINT8 sprite_id, UINT8 x, UINT8 y) {
  move_sprite(sprite_id, x, y);
}
