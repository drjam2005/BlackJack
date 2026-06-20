#pragma once
#ifndef UPDATER_H
#define UPDATER_H
#include "game_state.h"

class Updater {
	GameState& gameState;
public:
	Updater(GameState& gameState);
	void Update();
};

#endif
