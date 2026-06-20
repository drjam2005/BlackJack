#include "game.h"
#include "raylib.h"

int main(){
	Game game;

	InitWindow(800, 600, "BlackJack");
	SetTargetFPS(60);
	while(!WindowShouldClose()){
		BeginDrawing();
		ClearBackground(BLACK);

		game.Loop();

		EndDrawing();
	}

	return 0;
}
