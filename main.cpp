#include "Game.h"

int main(int argc, char** argv) {
	Game game(argc, argv);
	if (not game.init()) return EXIT_FAILURE;



}