#include "renderer.h"
#include "card.h"
#include "game_state.h"
#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

#define ICON_VALUE_START (224)
#define ICON_SUIT_START (240)

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
	this->icons_filename = GuiLoadIcons("../assets/card_icons.rgi", false);
}

Renderer::~Renderer(){
	MemFree(icons_filename);
}

void Renderer::_render_card(Card card){
	DrawRectangle(20, 20, 50, 50, WHITE);
	GuiDrawIcon(ICON_VALUE_START+card.value, 20, 20, 1, Suit_Colors[card.suit]);
	GuiDrawIcon(ICON_SUIT_START+card.suit+1, 20, 50, 1, Suit_Colors[card.suit]);
}

void Renderer::_render_hand(Hand hand){
}

void Renderer::Render() {
}
