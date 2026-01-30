#include "game/scenes.h"
#include "engine/core/banks.h"
#include "engine/core/scene.h"

void scene_title_init(void);
void scene_title_update(void);
void scene_world_init(void);
void scene_world_update(void);

volatile UINT8 scene_request = SCENE_REQUEST_NONE;

const scene_t scene_title = {
  BANK_UI,
  scene_title_init,
  scene_title_update
};

const scene_t scene_world = {
  BANK_WORLD,
  scene_world_init,
  scene_world_update
};

void scenes_handle_requests(void) {
  if (scene_request == SCENE_REQUEST_TITLE) {
    scene_request = SCENE_REQUEST_NONE;
    scene_set(&scene_title);
  } else if (scene_request == SCENE_REQUEST_WORLD) {
    scene_request = SCENE_REQUEST_NONE;
    scene_set(&scene_world);
  }
}
