#include "engine/world/camera.h"

void camera_reset(camera_t *cam) {
  cam->x = 0;
  cam->y = 0;
}

void camera_set(camera_t *cam, INT16 x, INT16 y) {
  cam->x = x;
  cam->y = y;
}
