#pragma once
#include<SFML/Graphics.hpp>
#include "GridMaker.h"
#include<iostream>

using namespace sf;
using namespace std;

class Userinput {
public:
	struct socket {
		CircleShape shape;
		float positionX;
		float positionY;
		float radius;
	};
	struct socket activeSockets[25];

	void mouseClick(RenderWindow& window, CircleShape socket, int i) {

		activeSockets[i].shape = socket;
		activeSockets[i].positionX = socket.getPosition().x;
		activeSockets[i].positionY = socket.getPosition().y;
		activeSockets[i].radius = 15.f;

		//Content Check
		for (int j = 0; j < i; j++) {
			cout << "Counter: " << i << endl;
			cout << "Passive Socket x: " << activeSockets[i].positionX << endl;
			cout << "Passive Socket y: " << activeSockets[i].positionY << endl;
		}
	}

	void renderActiveSockets(RenderWindow& window) {

		if (!(activeSockets)) {
			for (int i = 1; i < sizeof(activeSockets); i++) {
				activeSockets[i].shape.setPosition(activeSockets[i].positionX, activeSockets[i].positionY);
				activeSockets[i].shape.setRadius(activeSockets[i].radius);
				window.draw(activeSockets[i].shape);

				//Content Check
				for (int j = 0; j < sizeof(activeSockets); j++)
				{
					cout << "Counter: " << j << endl;
					cout << "Active Socket x: " << activeSockets[i].positionX << endl;
					cout << "Active Socket y: " << activeSockets[i].positionY << endl;
				}

			}
		}
	}

};


