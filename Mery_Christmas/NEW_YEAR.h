#pragma once
#include "Button.h"
#include "FontSF.h"
#include "Sne.h"
#include <time.h>
class NewYear: public FontSF{
	Sne* sne;
	int count = 1000;
public:
	NewYear() : FontSF() {
		textureNEW.loadFromFile("BACK.jpg");
		gamingBackground.setTexture(&textureNEW);
		sne = new Sne[count];
	}

	void printNEW(RenderWindow& win) {
		
		win.draw(gamingBackground);
		for (size_t i = 0; i < count; i++)
		{
			if (sne[i].getXY().y >= win.getSize().y) {
				sne[i].getcS().setPosition(sne[i].getXY().x, -20);
			}
			sne[i].getcS().setPosition(sne[i].getXY().x, sne[i].getXY().y+sne[i].getY());
			win.draw(sne[i].getcS());
		}
	}
};