#ifndef ENGINE_WORLD_CAMERA_H
#define ENGINE_WORLD_CAMERA_H

#include <gb/gb.h>

typedef struct camera {
  INT16 x;
  INT16 y;
} camera_t;

void camera_reset(camera_t *cam);
void camera_set(camera_t *cam, INT16 x, INT16 y);

#endif
