#pragma once
#ifndef CARD_H
#define CARD_H

#include <string>
#include <unordered_set>

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

	bool operator==(const Card& other) const {
		return (this->suit == other.suit && this->value == other.value);
	}
};

namespace std {
    template<>
    struct hash<Card> {
        size_t operator()(const Card& c) const {
            return hash<int>{}(c.value) ^ (hash<int>{}(c.suit) << 1);
        }
    };
}

std::unordered_set<Card> get_standard_deck();
const char* get_suit_string(CARD_SUIT suit);
const char* get_value_string(CARD_VALUE value);
const char* get_value_string_short(CARD_VALUE value);
std::string get_card_string(Card card);

#endif // CARD_H
