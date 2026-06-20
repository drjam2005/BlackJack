#include "renderer.h"
#include "card.h"
#include "game_state.h"
#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#define RAYGUI_CUSTOM_ICONS
#include "assets/card_sprites.h"
#include "raygui.h"

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
	DrawRectangle(20, 20, 50, 50, WHITE);
	GuiDrawIcon((int)ICON_VALUE_START + (int)card.value, 20, 20, 1, Suit_Colors[card.suit]);
	GuiDrawIcon((int)ICON_SUIT_START + (int)card.suit + 1, 20, 50, 1, Suit_Colors[card.suit]);
}

void Renderer::_render_hand(Hand hand, Vector2 position){

}

void Renderer::Render() {
    _render_hand(this->gameState.playerHand, {20, 20});
    _render_hand(this->gameState.dealerHand, {20, 70});

}
