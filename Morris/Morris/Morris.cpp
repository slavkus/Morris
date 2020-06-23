#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/GridMaker.h>
using namespace std;
using namespace sf;

int main()
{
	
	RenderWindow window(VideoMode(1024, 768), "Nine Men's Morris", (Style::Resize,Style::Close));
	RectangleShape background(Vector2f(800.f,600.f));
	background.setPosition(112.f, 84.f);
	/*Texture texture;
	texture.loadFromFile("C:/Users/Slavkus/Desktop/Morris/images/backimg.jpg");
	background.setTexture(&texture);*/
	Color color(0, 0, 128);
	background.setFillColor(color);

	VertexArray square(LineStrip, 5);
	square[0].position = Vector2f(224.f, 168.f);
	square[1].position = Vector2f(824.f, 168.f);
	square[2].position = Vector2f(824.f, 568.f);
	square[3].position = Vector2f(224.f, 568.f);
	square[4].position = Vector2f(224.f, 168.f);

	square[0].color = Color::Red;
	square[1].color = Color::Red;
	square[2].color = Color::Red;
	square[3].color = Color::Red;
	square[4].color = Color::Red;


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
		window.draw(square);
		window.display();
	}

	return 0;
}