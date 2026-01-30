#include "engine/core/scene.h"

static const scene_t *scene_current = 0;

void scene_set(const scene_t *scene) {
  scene_current = scene;
  if (scene_current && scene_current->init) {
    SWITCH_ROM(scene_current->bank);
    scene_current->init();
    SWITCH_ROM(0);
  }
}

void scene_update(void) {
  if (scene_current && scene_current->update) {
    SWITCH_ROM(scene_current->bank);
    scene_current->update();
    SWITCH_ROM(0);
  }
}
