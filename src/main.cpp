#include <iostream>

// #include "raylib.h"
#include "card.h"
#include <vector>

// just do card renderer for now

int main(){

	std::vector<Card> cards = get_standard_deck();

	std::cout << "Size of Deck: " << cards.size() << '\n';
	for(auto card : cards){
		std::cout << get_card_string(card) << '\n';
	}


	return 0;
}
