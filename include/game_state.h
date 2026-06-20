#pragma once
#ifndef GAME_STATE_H

#include "card.h"
#include "hand.h"

struct GameState {
	std::unordered_set<Card> deck = get_standard_deck();
	Hand playerHand;
	Hand dealerHand;
};

#endif 
