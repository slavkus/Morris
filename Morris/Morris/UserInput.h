#pragma once
#include<SFML/Graphics.hpp>
#include "GridMaker.h"
#include "SocketGenerator.h"
#include<iostream>
using namespace sf;
using namespace std;

class Userinput {
	public:
		int i = 1;
		void mouseClick(RenderWindow& window, CircleShape socket) {
			//Text text;
			Vector2f mousePos = Vector2f(Mouse::getPosition(window));
			if (Mouse::isButtonPressed(Mouse::Left) && socket.getGlobalBounds().contains(mousePos))
			{
				//Sockets sockets = new Sockets();
				CircleShape newSocket;
				newSocket.setRadius(15.f);
				newSocket.setPosition(95.f, 95.f);
				window.draw(newSocket);
			}
		}
};


