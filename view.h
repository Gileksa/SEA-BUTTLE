#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include "menu.h"
using namespace std;
using namespace sf;

class Gui
{
	public:
	Gui();
	~Gui();
	bool isHello;
	bool isMenu;
	RenderWindow getWindow();
	sf::RenderWindow window;
	//void drawMenu();

	private:
	
};
