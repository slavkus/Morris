#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

//Grid could've been made in one massive stack of lines,
//but when it comes to drawing morris board, it gets unnecesarily confusing to do it in one stroke
class Gridmaker {
	public:

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

		void getSocket() {

		}

};
