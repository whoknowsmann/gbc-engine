#ifndef ENGINE_CORE_VRAM_H
#define ENGINE_CORE_VRAM_H

#include <gb/gb.h>

void vram_load_bkg_data(UINT8 start, UINT8 count, const unsigned char *data);
void vram_load_sprite_data(UINT8 start, UINT8 count, const unsigned char *data);

#endif
