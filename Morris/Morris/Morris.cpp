#include <iostream>
#include <SFML/Graphics.hpp>
#include "GridMaker.h"
#include "UserInput.h"

using namespace std;
using namespace sf;

int main()
{
	int counter = 0;

	RenderWindow window(VideoMode(900, 900), "Nine Men's Morris", (Style::Resize, Style::Close));
	RectangleShape background(Vector2f(800.f, 800.f));
	background.setPosition(50.f, 50.f);
	Color color(0, 0, 128);
	background.setFillColor(color);

	Gridmaker gridMaker;
	Userinput userInput;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
			if (event.type == Event::MouseButtonPressed) {
				counter++;
				userInput.mouseClick(window, gridMaker.returnSocketPosition(window), counter);
				
			}
		}

		window.clear();
		window.draw(background);
		
		

		//Gridmaker calls
		window.draw(gridMaker.generateGridOuter());
		window.draw(gridMaker.generateGridMid());
		window.draw(gridMaker.generateGridInner());
		window.draw(gridMaker.generateGridSlicers());

		//Passive Sockets Drawing
		gridMaker.renderPassiveSockets(window);

		//Active Socket Rendering (User Click Generated)
		userInput.renderActiveSockets(window);

		window.display();
	}



	return 0;
}