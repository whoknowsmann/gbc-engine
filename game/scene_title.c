#include <gb/gb.h>
#include <gbdk/console.h>
#include "engine/core/banks.h"
#include "engine/core/input.h"
#include "game/scenes.h"

#pragma bank=1

static void title_draw(void) {
  HIDE_SPRITES;
  SHOW_BKG;
  cls();
  gotoxy(4, 7);
  printf("GBC ENGINE");
  gotoxy(3, 10);
  printf("PRESS START");
}

void scene_title_init(void) {
  title_draw();
}

void scene_title_update(void) {
  if (input_pressed(J_START)) {
    scene_request = SCENE_REQUEST_WORLD;
  }
}
