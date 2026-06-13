#include "card.h"

std::vector<Card> get_standard_deck() {
	std::vector<Card> cards;

	for(size_t suit = 0; suit < SUIT_COUNT; ++suit)
		for(size_t value = 1; value < VALUE_COUNT; ++value)
			cards.push_back((Card){(CARD_SUIT)suit, (CARD_VALUE)value});

	return cards;
}

const char* get_suit_string(CARD_SUIT suit){
	switch(suit){
		case SUIT_SPADES:
			return "Spades";
		case SUIT_HEARTS:
			return "Hearts";
		case SUIT_CLUBS:
			return "Clubs";
		case SUIT_DIAMONDS:
			return "Diamonds";
		default:
			return "NULL";
	}
}
const char* get_value_string(CARD_VALUE value){
	switch(value){
		case VALUE_ACE:
			return "Ace";
		case VALUE_TWO:
			return "Two";
		case VALUE_THREE:
			return "Three";
		case VALUE_FOUR:
			return "Four";
		case VALUE_FIVE:
			return "Five";
		case VALUE_SIX:
			return "Six";
		case VALUE_SEVEN:
			return "Seven";
		case VALUE_EIGHT:
			return "Eight";
		case VALUE_NINE:
			return "Nine";
		case VALUE_TEN:
			return "Ten";
		case VALUE_KING:
			return "King";
		case VALUE_QUEEN:
			return "Queen";
		case VALUE_JACK:
			return "Jack";
		default:
			return "NULL";
	}
}
const char* get_value_string_short(CARD_VALUE value) {
	switch(value){
		case VALUE_ACE:
			return "A";
		case VALUE_TWO:
			return "2";
		case VALUE_THREE:
			return "3";
		case VALUE_FOUR:
			return "4";
		case VALUE_FIVE:
			return "5";
		case VALUE_SIX:
			return "6";
		case VALUE_SEVEN:
			return "7";
		case VALUE_EIGHT:
			return "8";
		case VALUE_NINE:
			return "9";
		case VALUE_TEN:
			return "10";
		case VALUE_KING:
			return "K";
		case VALUE_QUEEN:
			return "Q";
		case VALUE_JACK:
			return "J";
		default:
			return 0;
	}
}
std::string get_card_string(Card card) {
	return std::string(get_value_string(card.value)) + " of " + get_suit_string(card.suit);
}
