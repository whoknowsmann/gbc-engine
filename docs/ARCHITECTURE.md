# GBC Engine Architecture

## Overview
This repository is an engine-first scaffold for a Game Boy Color project built with GBDK-2020. The code is split into `/engine` (reusable systems) and `/game` (game-specific content). The default build produces a `.gbc` ROM in `build/out/`.

## Banking layout
The ROM is organized with explicit banking targets that match GBDK conventions:

- **Bank 0 (core)**: Engine systems and the main loop (`engine/core`, `engine/gfx`, `engine/world`, `game/main.c`, `game/scenes.c`).
- **Bank 1 (UI)**: Title scene and UI logic (`game/scene_title.c`).
- **Bank 2 (world)**: World scene and world assets (`game/scene_world.c`, `game/assets_world.c`).

Each scene stores its bank ID in a `scene_t` descriptor so the scene manager can `SWITCH_ROM()` before calling scene logic.

## Modules
### Core
- **Input** (`engine/core/input.*`): Tracks current/previous button states.
- **Scene manager** (`engine/core/scene.*`): Switches between scenes and calls scene update functions with banking.
- **VBlank/interrupts** (`engine/core/vblank.*`): Stub ISR plus `wait_vbl_done()` helpers.
- **VRAM helpers** (`engine/core/vram.*`): Thin wrappers for VRAM transfers.

### GFX
- **Tilemap** (`engine/gfx/tilemap.*`): Simple background tile map draw helper.
- **Sprite** (`engine/gfx/sprite.*`): Sprite init + move helpers.

### World
- **Camera** (`engine/world/camera.*`): Position storage stub.
- **Collision** (`engine/world/collision.*`): Hardcoded bounds-based collision grid.

## Scene lifecycle
1. `main` calls `scene_set(&scene_title)` to initialize the title scene.
2. The main loop updates input, calls `scene_update()`, and then checks for scene requests.
3. Scenes signal transitions by setting `scene_request` (WRAM). The bank-0 handler switches scenes safely after the scene update returns.

## Planned milestones
- Replace placeholder assets with real art and data built by asset pipelines.
- Expand collision to use actual map data.
- Add animation system and metasprite support.
- Add audio driver hooks and music/sfx playback.
- Introduce save data and game state persistence.
