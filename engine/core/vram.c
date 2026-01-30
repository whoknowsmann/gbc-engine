#include "engine/core/vram.h"

void vram_load_bkg_data(UINT8 start, UINT8 count, const unsigned char *data) {
  set_bkg_data(start, count, data);
}

void vram_load_sprite_data(UINT8 start, UINT8 count, const unsigned char *data) {
  set_sprite_data(start, count, data);
}
