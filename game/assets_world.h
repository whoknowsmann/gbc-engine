#ifndef GAME_ASSETS_WORLD_H
#define GAME_ASSETS_WORLD_H

#include <gb/gb.h>

#define WORLD_TILE_COUNT 3
#define WORLD_TILEMAP_WIDTH 20
#define WORLD_TILEMAP_HEIGHT 18

extern const unsigned char world_tiles[WORLD_TILE_COUNT * 16];
extern const unsigned char world_tilemap[WORLD_TILEMAP_WIDTH * WORLD_TILEMAP_HEIGHT];
extern const unsigned char world_sprite_tile[16];

#endif
