#pragma once
#include <iostream>
#include <gl/glew.h> //--- 필요한 헤더파일 include
#include <gl/freeglut.h>
#include <gl/freeglut_ext.h>

class Game
{
public:
	Game(int& argc, char** argv) : gArgc{ argc }, gArgv{ argv } {}
private:
	int gArgc;
	char** gArgv;

public:
	bool init();
	void run();
	void shutdown();

private:

};

