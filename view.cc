#include "view.h"

Gui::Gui()
{
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
        	sf::Event event;
        	while (window.pollEvent(event))
        	{
            	if (event.type == sf::Event::Closed)
                	window.close();
        	}

        	window.clear();
        	window.draw(hellosprite);
        	window.display();
    	}
}

Gui::~Gui()
{
	window.close();
}
