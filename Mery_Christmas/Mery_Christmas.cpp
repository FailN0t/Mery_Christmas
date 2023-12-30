﻿// Mery_Christmas.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Button.h"
#include "FontSF.h"
int main()
{
	RenderWindow win(VideoMode(600, 800), "Calc");
	Image icon;
	if (!icon.loadFromFile("icon.png")) return 13;  // Отсутствует иконка приложения
	win.setIcon(32, 32, icon.getPixelsPtr());
	Event event;
	int i = 20;
	win.setFramerateLimit(30);
	Butt butt(220, 400, 155, 50, Color::Cyan, "New Year");
	FontSF font;
	while (win.isOpen()) {
		while (win.pollEvent(event))  // Цикл игровых событий: нажатие клавишь, перемещение мышки и другие.
		{
			if (event.type == Event::Closed) win.close(); // Закрыть окно
			butt.mousePresBut(win, event);
		}
		win.clear();
		font.printFONT(win);
		butt.printButt(win);
		
		win.display();
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
