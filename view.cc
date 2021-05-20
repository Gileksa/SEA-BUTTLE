#include "view.h"

//#include <Event.hpp>

Gui::Gui()
{
	int i = 0;

	window.create(sf::VideoMode(800, 600), "SEA BUTTLE");
    	
	Image hello;
	hello.loadFromFile("hl.png");
	hello.createMaskFromColor(Color(0,0,0));

	Texture hellotexture;
	hellotexture.loadFromImage(hello);

	Sprite hellosprite;
	hellosprite.setTexture(hellotexture);
	hellosprite.setPosition(0,-100);

    	while (window.isOpen())
    	{
        	Event event;
        	while (window.pollEvent(event))
        	{
			switch(event.type)
			{
				case Event::Closed:
					window.close();
					break;
				
				case Event::MouseButtonPressed:
					i++;
					break;
				default:
					break;
			}
        	}

        	window.clear();      	
		if (i == 0)
			window.draw(hellosprite);
		if (i != 0)
		{
			//window.close();
			//View* v = this;
			Menu menu(&window);
		}
        	window.display();		
    	}
}

Gui::~Gui()
{
	window.close();
}

/*View::sf::RenderWindow getWindow()
{
	return window;
}*/

/*void View::drawMenu()
{
Texture menuTexture1, menuBackground; //, menuTexture2, menuTexture3, aboutTexture,
	menuTexture1.loadFromFile("play.png");
	//menuTexture2.loadFromFile("play.png");
	//menuTexture3.loadFromFile("play.png");
	//aboutTexture.loadFromFile("play.png");
	menuBackground.loadFromFile(".jpg");

	
	Sprite menu1(menuTexture1), menuBg(menuBackground);//menu2(menuTexture2), menu3(menuTexture3), about(aboutTexture), 
	bool isMenu = 1;
	int menuNum = 0;
//	menu1.setPosition(100, 30);
	//menu2.setPosition(100, 90);
	//menu3.setPosition(100, 150);
	menuBg.setPosition(0, -100);
 
	//////////////////////////////МЕНЮ///////////////////

//while (window.isOpen())
  //  	{
	//while (isMenu)
	//{
//		menu1.setColor(Color::White);
		//menu2.setColor(Color::White);
		//menu3.setColor(Color::White);
//		menuNum = 0;
//		window.clear(Color(129, 181, 221));
 
//		if (IntRect(100, 30, 300, 50).contains(Mouse::getPosition(window))) { menu1.setColor(Color::Blue); menuNum = 1; }
		//if (IntRect(100, 90, 300, 50).contains(Mouse::getPosition(window))) { menu2.setColor(Color::Blue); menuNum = 2; }
		//if (IntRect(100, 150, 300, 50).contains(Mouse::getPosition(window))) { menu3.setColor(Color::Blue); menuNum = 3; }
 
//		if (Mouse::isButtonPressed(Mouse::Left))
//		{
//			if (menuNum == 1) isMenu = false;//если нажали первую кнопку, то выходим из меню 
			//if (menuNum == 2) { window.draw(about); window.display(); while (!Keyboard::isKeyPressed(Keyboard::Escape)); }
			//if (menuNum == 3)  { window.close(); isMenu = false; }
 
//		}
 
		window.draw(menuBg);
//		window.draw(menu1);
		//window.draw(menu2);
		//window.draw(menu3);
}*/
