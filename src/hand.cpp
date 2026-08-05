#include "hand.h"

std::vector<Card>& Hand::get_cards() {
	return cards;
}
void Hand::provide_card(Card card) {
	cards.push_back(card);
}
