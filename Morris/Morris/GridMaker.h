#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

//Grid could've been made in one massive stack of lines,
//but when it comes to drawing morris board, it gets unnecesarily confusing to do it in one stroke
class Gridmaker {
public:

	CircleShape socket1;
	CircleShape socket2;
	CircleShape socket3;
	CircleShape socket4;
	CircleShape socket5;
	CircleShape socket6;
	CircleShape socket7;
	CircleShape socket8;
	CircleShape socket9;
	CircleShape socket10;
	CircleShape socket11;
	CircleShape socket12;
	CircleShape socket13;
	CircleShape socket14;
	CircleShape socket15;
	CircleShape socket16;
	CircleShape socket17;
	CircleShape socket18;
	CircleShape socket19;
	CircleShape socket20;
	CircleShape socket21;
	CircleShape socket22;
	CircleShape socket23;
	CircleShape socket24;
	CircleShape socket25;

	//Outer Square
	VertexArray generateGridOuter() {
		VertexArray square(LineStrip, 5);
		square[0].position = Vector2f(100.f, 100.f);
		square[1].position = Vector2f(800.f, 100.f);
		square[2].position = Vector2f(800.f, 800.f);
		square[3].position = Vector2f(100.f, 800.f);
		square[4].position = Vector2f(100.f, 100.f);

		square[0].color = Color::Red;
		square[1].color = Color::Red;
		square[2].color = Color::Red;
		square[3].color = Color::Red;
		square[4].color = Color::Red;

		return square;
	}
	//Middle Square
	VertexArray generateGridMid() {
		VertexArray square(LineStrip, 5);
		square[0].position = Vector2f(200.f, 200.f);
		square[1].position = Vector2f(700.f, 200.f);
		square[2].position = Vector2f(700.f, 700.f);
		square[3].position = Vector2f(200.f, 700.f);
		square[4].position = Vector2f(200.f, 200.f);

		square[0].color = Color::Red;
		square[1].color = Color::Red;
		square[2].color = Color::Red;
		square[3].color = Color::Red;
		square[4].color = Color::Red;

		return square;
	}
	//Inner Square
	VertexArray generateGridInner() {
		VertexArray square(LineStrip, 5);
		square[0].position = Vector2f(300.f, 300.f);
		square[1].position = Vector2f(600.f, 300.f);
		square[2].position = Vector2f(600.f, 600.f);
		square[3].position = Vector2f(300.f, 600.f);
		square[4].position = Vector2f(300.f, 300.f);

		square[0].color = Color::Red;
		square[1].color = Color::Red;
		square[2].color = Color::Red;
		square[3].color = Color::Red;
		square[4].color = Color::Red;

		return square;
	}
	//Linestrips that will slash halves, a circle had to be made
	//to achieve it in one stroke
	VertexArray generateGridSlicers() {
		VertexArray square(LineStrip, 15);
		square[0].position = Vector2f(450.f, 100.f);
		square[1].position = Vector2f(450.f, 200.f);
		square[2].position = Vector2f(450.f, 300.f);
		square[3].position = Vector2f(300.f, 300.f);
		square[4].position = Vector2f(300.f, 450.f);
		square[5].position = Vector2f(200.f, 450.f);
		square[6].position = Vector2f(100.f, 450.f);
		square[7].position = Vector2f(100.f, 800.f);
		square[8].position = Vector2f(450.f, 800.f);
		square[9].position = Vector2f(450.f, 700.f);
		square[10].position = Vector2f(450.f, 600.f);
		square[11].position = Vector2f(600.f, 600.f);
		square[12].position = Vector2f(600.f, 450.f);
		square[13].position = Vector2f(700.f, 450.f);
		square[14].position = Vector2f(800.f, 450.f);

		square[0].color = Color::Red;
		square[1].color = Color::Red;
		square[2].color = Color::Red;
		square[3].color = Color::Red;
		square[4].color = Color::Red;
		square[5].color = Color::Red;
		square[6].color = Color::Red;
		square[7].color = Color::Red;
		square[8].color = Color::Red;
		square[9].color = Color::Red;
		square[10].color = Color::Red;
		square[11].color = Color::Red;
		square[12].color = Color::Red;
		square[13].color = Color::Red;
		square[14].color = Color::Red;

		return square;
	}

	void renderPassiveSockets(RenderWindow& window) {

		socket1.setRadius(5.f);
		socket2.setRadius(5.f);
		socket3.setRadius(5.f);
		socket4.setRadius(5.f);
		socket5.setRadius(5.f);
		socket6.setRadius(5.f);
		socket7.setRadius(5.f);
		socket8.setRadius(5.f);
		socket9.setRadius(5.f);
		socket10.setRadius(5.f);
		socket11.setRadius(5.f);
		socket12.setRadius(5.f);
		socket13.setRadius(5.f);
		socket14.setRadius(5.f);
		socket15.setRadius(5.f);
		socket16.setRadius(5.f);
		socket17.setRadius(5.f);
		socket18.setRadius(5.f);
		socket19.setRadius(5.f);
		socket20.setRadius(5.f);
		socket21.setRadius(5.f);
		socket22.setRadius(5.f);
		socket23.setRadius(5.f);
		socket24.setRadius(5.f);
		socket25.setRadius(5.f);

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

	}

	CircleShape returnSocketPosition(RenderWindow& window) {

		float xCoord[] = { 95.f,795.f,795.f,95.f,195.f,695.f,
							695.f,195.f,295.f,595.f,595.f,
							295.f,445.f,445.f,445.f,295.f,195.f,95.f,
							445.f,445.f,445.f,445.f,595.f,695.f,795.f };

		float yCoord[] = { 95.f,95.f,795.f,195.f,195.f,695.f,
							695.f,295.f,295.f,595.f,595.f,
							95.f,195.f,295.f,445.f,445.f,445.f,795.f,
							695.f,595.f,595.f,445.f,445.f,445.f };

		CircleShape passiveSockets[] = { socket1, socket2, socket3, socket4, socket5, socket6,
									socket7, socket8, socket9, socket10, socket11, socket12,
									socket13, socket14, socket15, socket16, socket17, socket18,
									socket19, socket20, socket21, socket22, socket23, socket24, socket25 };

		Vector2f mousePos = Vector2f(Mouse::getPosition(window));
		//Checking x,y Coordinate of passive socket with mouse position
		for (int i = 0; i < 25; i++) {
			if (Mouse::isButtonPressed(Mouse::Left) && passiveSockets[i].getGlobalBounds().contains(mousePos)) {
				return passiveSockets[i];
			}
		};
	}

};
