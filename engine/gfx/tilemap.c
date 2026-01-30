#include "engine/gfx/tilemap.h"

void tilemap_draw(UINT8 x, UINT8 y, UINT8 w, UINT8 h, const unsigned char *map) {
  set_bkg_tiles(x, y, w, h, map);
}
