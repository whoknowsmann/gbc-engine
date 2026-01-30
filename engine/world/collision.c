#include "engine/world/collision.h"

UINT8 collision_is_blocked(UINT8 tile_x, UINT8 tile_y) {
  if (tile_x == 0 || tile_y == 0 || tile_x >= 19 || tile_y >= 17) {
    return 1;
  }
  return 0;
}
