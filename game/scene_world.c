#include <gb/gb.h>
#include "engine/core/banks.h"
#include "engine/core/input.h"
#include "engine/core/vram.h"
#include "engine/gfx/tilemap.h"
#include "engine/gfx/sprite.h"
#include "engine/world/collision.h"
#include "game/assets_world.h"
#include "game/scenes.h"

#pragma bank=2

static UINT8 player_x = 80;
static UINT8 player_y = 72;

static void world_draw(void) {
  HIDE_BKG;
  HIDE_SPRITES;
  vram_load_bkg_data(0, WORLD_TILE_COUNT, world_tiles);
  tilemap_draw(0, 0, WORLD_TILEMAP_WIDTH, WORLD_TILEMAP_HEIGHT, world_tilemap);
  vram_load_sprite_data(0, 1, world_sprite_tile);
  set_sprite_tile(0, 0);
  sprite_move(0, player_x, player_y);
  SHOW_BKG;
  SHOW_SPRITES;
}

void scene_world_init(void) {
  world_draw();
}

void scene_world_update(void) {
  UINT8 next_x = player_x;
  UINT8 next_y = player_y;

  if (input_held(J_LEFT)) {
    next_x--;
  } else if (input_held(J_RIGHT)) {
    next_x++;
  } else if (input_held(J_UP)) {
    next_y--;
  } else if (input_held(J_DOWN)) {
    next_y++;
  }

  if (!collision_is_blocked(next_x / 8, next_y / 8)) {
    player_x = next_x;
    player_y = next_y;
    sprite_move(0, player_x, player_y);
  }

  if (input_pressed(J_SELECT)) {
    scene_request = SCENE_REQUEST_TITLE;
  }
}
