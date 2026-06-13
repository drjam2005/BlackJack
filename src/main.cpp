#include "raylib.h"

// just do card renderer for now

int main(){
	InitWindow(800, 600, "BLACKJACK");
	SetTargetFPS(60);
	while(!WindowShouldClose()){
		BeginDrawing();
		ClearBackground(BLACK);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}
