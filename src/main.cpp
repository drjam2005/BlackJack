
// #include "raylib.h"
#include "renderer.h"
#include "raylib.h"
#include <cstdio>

// just do card renderer for now

int main(){
	Renderer renderer;

	InitWindow(800, 600, "BlackJack");
	SetTargetFPS(60);
	while(!WindowShouldClose()){
		BeginDrawing();
		ClearBackground(BLACK);

		renderer._render_card(
					Card {
						.suit = SUIT_HEARTS,
						.value = VALUE_FOUR
					}
				);
			

		EndDrawing();
	}


	return 0;
}
