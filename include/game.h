#pragma once
#include "renderer.h"
#include "updater.h"
#ifndef GAME_H
#define GAME_H
#include "game_state.h"

class Game {
	GameState gameState;
	Updater updater;
	Renderer renderer;
public:
	Game();
	void Loop();
};

#endif
