#include <iostream>
#include <SFML/Graphics.hpp>
#include "GridMaker.h"
using namespace std;
using namespace sf;

int main()
{
	
	RenderWindow window(VideoMode(900, 900), "Nine Men's Morris", (Style::Resize,Style::Close));
	RectangleShape background(Vector2f(800.f,800.f));
	background.setPosition(50.f, 50.f);
	Color color(0, 0, 128);
	background.setFillColor(color);

	Gridmaker gridmaker;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(background);
		window.draw(gridmaker.generateGridOuter());
		window.draw(gridmaker.generateGridMid());
		window.draw(gridmaker.generateGridInner());
		window.draw(gridmaker.generateGridSlicers());
		window.display();
	}

	return 0;
}