#ifndef GAME_SCENES_H
#define GAME_SCENES_H

#include <gb/gb.h>
#include "engine/core/scene.h"

#define SCENE_REQUEST_NONE 0
#define SCENE_REQUEST_TITLE 1
#define SCENE_REQUEST_WORLD 2

extern volatile UINT8 scene_request;
extern const scene_t scene_title;
extern const scene_t scene_world;

void scenes_handle_requests(void);

#endif
