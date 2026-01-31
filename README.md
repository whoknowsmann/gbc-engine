# GBC Engine

A minimal, engine-first scaffold for Game Boy Color development using GBDK-2020. Provides reusable systems for input, scene management, graphics, and world logic.

## Structure

- `/engine` — Reusable systems (input, scenes, graphics, world)
- `/game` — Game-specific content and scenes
- `/tools` — Build utilities
- `/docs` — Architecture documentation

## Features

- Scene manager with ROM banking support
- Input handling with current/previous state tracking
- Tilemap and sprite helpers
- Basic collision system
- VBlank interrupt handling

## Requirements

- GBDK-2020
- Make

## Build

```bash
make
```

Output ROM: `build/out/game.gbc`

## Documentation

See `docs/ARCHITECTURE.md` for detailed module breakdown and banking layout.

## Status

Early scaffold — placeholder assets need replacement. See `docs/ARCHITECTURE.md` for planned milestones.
