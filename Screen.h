#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
class Screen {
public: 
		void initScreen();
		void afficherScore(Player player);
		void Ecrire(string msg);
		void clearScreen();
		void home();
		void nbLine(int row, int column);
		Screen();
};

#endif