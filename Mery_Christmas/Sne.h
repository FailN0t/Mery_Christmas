#pragma once
#include "Button.h"

class Sne {
	CircleShape cS;
	float y;
public:
	Sne() {
		cS.setPosition(rand() % 600, 0);
		cS.setRadius(rand() % 10 + 1);
		cS.setFillColor(Color(255, 255, 255, rand() % 200 + 50));
		y = (float)(rand() % 100 + 5) / 100;
	}
	CircleShape& getcS() {
		return cS;
	}
	Vector2f getXY() {
		return cS.getPosition();
	}
	float getY(){
		return y;
	}
};