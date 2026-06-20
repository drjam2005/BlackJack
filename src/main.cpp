#include "renderer.h"
#include "raylib.h"

int main(){
	Renderer renderer;

	InitWindow(800, 600, "BlackJack");
	SetTargetFPS(60);
	while(!WindowShouldClose()){
		BeginDrawing();
		ClearBackground(BLACK);

		renderer._render_card( Card { 
				.suit = SUIT_SPADES,
				.value = VALUE_ACE 
			});

		EndDrawing();
	}

	return 0;
}
