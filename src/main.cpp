#include <iostream>

// #include "raylib.h"
#include "card.h"
#include <vector>

// just do card renderer for now

int main(){

	std::vector<Card> cards = get_standard_deck();

	for(auto card : cards){
		std::cout << "Card: " << get_value_string(card.value) << " of " << get_suit_string(card.suit) << '\n';
	}


	return 0;
}
