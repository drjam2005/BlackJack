#include "game.h"

Game::Game() :
	updater(Updater(gameState)),
	renderer(Renderer(gameState))
{
}

void Game::Loop(){
	this->updater.Update();
	this->renderer.Render();
}
