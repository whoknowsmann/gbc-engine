LCC = lcc

PROJECT_NAME = gbc_engine
OUTPUT_DIR = build/out
OUTPUT_ROM = $(OUTPUT_DIR)/$(PROJECT_NAME).gbc

LCCFLAGS = -Wm-yC -Wm-yt1 -Wm-yo4 -Wm-ya4 -Wm-yn"$(PROJECT_NAME)"

SOURCES = \
	engine/core/input.c \
	engine/core/scene.c \
	engine/core/vblank.c \
	engine/core/vram.c \
	engine/gfx/tilemap.c \
	engine/gfx/sprite.c \
	engine/world/camera.c \
	engine/world/collision.c \
	game/main.c \
	game/scenes.c \
	game/scene_title.c \
	game/scene_world.c \
	game/assets_world.c

.PHONY: build assets clean

build: $(OUTPUT_ROM)

assets:
	python tools/pipelines/build_assets.py

$(OUTPUT_ROM): $(SOURCES)
	mkdir -p $(OUTPUT_DIR)
	$(LCC) $(LCCFLAGS) -o $(OUTPUT_ROM) $(SOURCES)

clean:
	rm -rf build/out
