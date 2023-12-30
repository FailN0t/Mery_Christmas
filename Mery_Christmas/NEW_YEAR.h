#pragma once
#include "Button.h"
#include "FontSF.h"
#include <time.h>
class NewYear: public FontSF{
	CircleShape* cS;
public:
	NewYear() : FontSF() {
		textureNEW.loadFromFile("BACK.jpg");
		gamingBackground.setTexture(&textureNEW);
		cS = new CircleShape[100];
		for (size_t i = 0; i < 100; i++)
		{
			cS[i].setPosition(rand() % 600, 0);
			cS[i].setRadius(rand() % 20 + 5);
		}
	}

	void printNEW(RenderWindow& win) {
		
		win.draw(gamingBackground);
		for (size_t i = 0; i < 100; i++)
		{
			win.draw(cS[i]);
		}
	}
};