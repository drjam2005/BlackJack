#include "renderer.h"
#include "raylib.h"

Color Suit_Colors[SUIT_COUNT] = {
	BLACK, // SUIT_SPADES
	RED,   // SUIT_HEARTS
	BLACK, // SUIT_CLUBS
	RED,   // SUIT_DIAMONDS
};

void Renderer::_render_card(Card card){
	DrawRectangle(20, 20, 50, 50, Suit_Colors[card.suit]);
}
