#pragma once
#ifndef RENDERER_H
#define RENDERER_H

#include "card.h"
#include "raylib.h"

extern Color Suit_Colors[SUIT_COUNT];

class Renderer {
public:
	void _render_card(Card card);
};

#endif
