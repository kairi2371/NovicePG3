#include "Manager/GameManager.h"
#include <Novice.h>

const char kWindowTitle[] = "LE2D_11_シオタ_カイリ";

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	SetConsoleOutputCP(65001);

	std::unique_ptr<GameManager> gameManager = std::make_unique<GameManager>();
	gameManager->Run();

	return 0;
}