#include <iostream>
#include <SFML/Graphics.hpp>
#include "GridMaker.h"
#include "UserInput.h"
#include "SocketGenerator.h"
using namespace std;
using namespace sf;

int main()
{

	RenderWindow window(VideoMode(900, 900), "Nine Men's Morris", (Style::Resize, Style::Close));
	RectangleShape background(Vector2f(800.f, 800.f));
	background.setPosition(50.f, 50.f);
	Color color(0, 0, 128);
	background.setFillColor(color);

	CircleShape socket1(5.f);
	CircleShape socket2(5.f);
	CircleShape socket3(5.f);
	CircleShape socket4(5.f);
	CircleShape socket5(5.f);
	CircleShape socket6(5.f);
	CircleShape socket7(5.f);
	CircleShape socket8(5.f);
	CircleShape socket9(5.f);
	CircleShape socket10(5.f);
	CircleShape socket11(5.f);
	CircleShape socket12(5.f);
	CircleShape socket13(5.f);
	CircleShape socket14(5.f);
	CircleShape socket15(5.f);
	CircleShape socket16(5.f);
	CircleShape socket17(5.f);
	CircleShape socket18(5.f);
	CircleShape socket19(5.f);
	CircleShape socket20(5.f);
	CircleShape socket21(5.f);
	CircleShape socket22(5.f);
	CircleShape socket23(5.f);
	CircleShape socket24(5.f);
	CircleShape socket25(5.f);

	socket1.setPosition(95.f, 95.f);
	socket2.setPosition(795.f, 95.f);
	socket3.setPosition(795.f, 795.f);
	socket4.setPosition(95.f, 795.f);
	socket5.setPosition(195.f, 195.f);
	socket6.setPosition(695.f, 195.f);
	socket7.setPosition(695.f, 695.f);
	socket8.setPosition(195.f, 695.f);
	socket9.setPosition(295.f, 295.f);
	socket10.setPosition(595.f, 295.f);
	socket11.setPosition(595.f, 595.f);
	socket12.setPosition(295.f, 595.f);
	socket13.setPosition(445.f, 95.f);
	socket14.setPosition(445.f, 195.f);
	socket15.setPosition(445.f, 295.f);
	socket16.setPosition(295.f, 445.f);
	socket17.setPosition(195.f, 445.f);
	socket18.setPosition(95.f, 445.f);
	socket19.setPosition(445.f, 795.f);
	socket20.setPosition(445.f, 695.f);
	socket21.setPosition(445.f, 595.f);
	socket22.setPosition(445.f, 595.f);
	socket23.setPosition(595.f, 445.f);
	socket24.setPosition(695.f, 445.f);
	socket25.setPosition(795.f, 445.f);

	float positionsX[] = {95.f,795.f,795.f,95.f,195.f,695.f,
							695.f,195.f,295.f,595.f,595.f,
							295.f,445.f,445.f,445.f,295.f,195.f,95.f,
							445.f,445.f,445.f,445.f,595.f,695.f,795.f};

	float positionsY[] = {95.f,95.f,795.f,195.f,195.f,695.f,
							695.f,295.f,295.f,595.f,595.f,
							95.f,195.f,295.f,445.f,445.f,445.f,795.f,
							695.f,595.f,595.f,445.f,445.f,445.f};

	Userinput userInput;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if(event.type == Event::MouseButtonPressed)
				userInput.mouseClick(window, socket1);

			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(background);
		
		Gridmaker gridMaker;

		//Gridmaker calls
		window.draw(gridMaker.generateGridOuter());
		window.draw(gridMaker.generateGridMid());
		window.draw(gridMaker.generateGridInner());
		window.draw(gridMaker.generateGridSlicers());

		//Sockets drawing
		window.draw(socket1);
		window.draw(socket2);
		window.draw(socket3);
		window.draw(socket4);
		window.draw(socket5);
		window.draw(socket6);
		window.draw(socket7);
		window.draw(socket8);
		window.draw(socket9);
		window.draw(socket10);
		window.draw(socket11);
		window.draw(socket12);
		window.draw(socket13);
		window.draw(socket14);
		window.draw(socket15);
		window.draw(socket16);
		window.draw(socket17);
		window.draw(socket18);
		window.draw(socket19);
		window.draw(socket20);
		window.draw(socket21);
		window.draw(socket22);
		window.draw(socket23);
		window.draw(socket24);
		window.draw(socket25);

		window.display();
	}



	return 0;
}