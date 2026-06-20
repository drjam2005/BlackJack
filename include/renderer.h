#pragma once
#ifndef RENDERER_H
#define RENDERER_H

#include "card.h"
#include "hand.h"
#include "raylib.h"
#include "game_state.h"

struct RendererParams {
	Vector2 resolution;
};

extern Color Suit_Colors[SUIT_COUNT];
extern RendererParams defaultRendererParams;

class Renderer {
private:
	RendererParams params;
	GameState& gameState;
public:
	Renderer(GameState& gameState, RendererParams params = defaultRendererParams);
	~Renderer();
	void Render();
	void _render_card(Card card, Vector2 position);
	void _render_hand(Hand hand, Vector2 position);
};

#endif
