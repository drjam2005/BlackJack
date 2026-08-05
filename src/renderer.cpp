#include "renderer.h"
#include "card.h"
#include "game_state.h"
#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#define RAYGUI_CUSTOM_ICONS
#include "assets/card_sprites.h"
#include "raygui.h"

#define CARD_WIDTH 50
#define CARD_HEIGHT 70

RendererParams defaultRendererParams = {
	(Vector2){
		800, 600
	},
};

Color Suit_Colors[SUIT_COUNT] = {
	BLACK,
	RED,
	BLACK,
	RED,
};

Renderer::Renderer(GameState& gameState, RendererParams params) : gameState(gameState) {
	this->params = params;
}

Renderer::~Renderer(){

}

void Renderer::_render_card(Card card, Vector2 position){
	DrawRectangle(position.x, position.y, CARD_WIDTH, CARD_HEIGHT, WHITE);
	GuiDrawIcon((int)ICON_VALUE_START + (int)card.value,   position.x, position.y, 1, Suit_Colors[card.suit]);
	GuiDrawIcon((int)ICON_SUIT_START + (int)card.suit + 1, position.x + (CARD_WIDTH/2.0f - 8), position.y + (CARD_HEIGHT/2.0f - 8), 1, Suit_Colors[card.suit]);
}

void Renderer::_render_hand(Hand hand, Vector2 position){
	size_t i = 0;

	for(auto card : hand.get_cards()) {
		_render_card(card, {position.x + (i*(55)), position.y});
		++i;
	}

}

void Renderer::Render() {
    _render_hand(this->gameState.playerHand, {20, 20});
    _render_hand(this->gameState.dealerHand, {20, 20 + CARD_HEIGHT + 5});
}
