#pragma once
#ifndef HAND_H
#define HAND_H

#include "card.h"
#include <vector>

struct Hand {
private:
	std::vector<Card> cards;
public:
	std::vector<Card>& get_cards();
	void provide_card(Card card);
};

#endif // HAND_H
