#pragma once
#include "Button.h"

class FontSF {
protected:
    Texture textureNEW;
    RectangleShape gamingBackground;
    RectangleShape gamingBackground2;
    int x = 0;
    int x2 = 1200;
public:
    FontSF() {
        gamingBackground.setSize(Vector2f(1200, 800));
        textureNEW.loadFromFile("BACK2.jpg");
        gamingBackground.setTexture(&textureNEW);
        gamingBackground2 = gamingBackground;
    }
    void printFONT(RenderWindow& win) {
        if (x2 <= -600) {
            x = 0;
            x2 = 1200;
        }
        gamingBackground.setPosition(x-=5, 0);
        gamingBackground2.setPosition(x2-=5, 0);
        
        win.draw(gamingBackground);
        win.draw(gamingBackground2);
    }
};