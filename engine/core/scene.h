#ifndef ENGINE_CORE_SCENE_H
#define ENGINE_CORE_SCENE_H

#include <gb/gb.h>

typedef void (*scene_func_t)(void);

typedef struct scene {
  UINT8 bank;
  scene_func_t init;
  scene_func_t update;
} scene_t;

void scene_set(const scene_t *scene);
void scene_update(void);

#endif
