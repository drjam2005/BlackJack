#include "game.h"
#include "card.h"

Game::Game() :
	updater(Updater(gameState)),
	renderer(Renderer(gameState))
{

	gameState.dealerHand.provide_card(Card {
			SUIT_HEARTS,
			VALUE_JACK
		});
	gameState.playerHand.provide_card(Card {
			SUIT_SPADES,
			VALUE_ACE
		});
	gameState.playerHand.provide_card(Card {
			SUIT_HEARTS,
			VALUE_ACE
		});

}

void Game::Loop(){
	this->updater.Update();
	this->renderer.Render();
}
