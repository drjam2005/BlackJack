#pragma once
#ifndef CARD_H
#define CARD_H

#include <vector>

enum CARD_SUIT {
	SUIT_SPADES = 0,
	SUIT_HEARTS,
	SUIT_CLUBS,
	SUIT_DIAMONDS,
	SUIT_COUNT
};

enum CARD_VALUE {
	VALUE_ACE = 1,
	VALUE_TWO,
	VALUE_THREE,
	VALUE_FOUR,
	VALUE_FIVE,
	VALUE_SIX,
	VALUE_SEVEN,
	VALUE_EIGHT,
	VALUE_NINE,
	VALUE_TEN,
	VALUE_KING,
	VALUE_QUEEN,
	VALUE_JACK,
	VALUE_COUNT
};

struct Card {
	CARD_SUIT suit;
	CARD_VALUE value;
};

std::vector<Card> get_standard_deck();
const char* get_suit_string(CARD_SUIT suit);
const char* get_value_string(CARD_VALUE value);

#endif // CARD_H
