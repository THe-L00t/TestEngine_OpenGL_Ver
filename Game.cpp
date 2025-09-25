#include "Game.h"

bool Game::init()
{
	glutInit(&gArgc, gArgv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(500, 500);
	glutCreateWindow("TestEngine made by THe-L00t");

	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK) { //--- glew √ ±‚»≠ 
		std::cerr << "Unable to initialize GLEW" << std::endl;
		return false;
	}
	else {
		std::cout << "GLEW Initialized\n";
		return true;
	}
    
}

void Game::run()
{
}

void Game::shutdown()
{
}
