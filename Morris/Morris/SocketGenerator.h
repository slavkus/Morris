#pragma once
#include <SFML/Graphics.hpp>
class Sockets {
	public:
		CircleShape socket;
		float radius = 5.f;

		Sockets() {
		}

		Sockets(CircleShape socket) {
			this->socket = socket;
			this->socket.setRadius(5.f);

		}

		CircleShape getSocket() {
			return socket;
		}


};