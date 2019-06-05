#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <string>
#include <mraa/i2c.h>
#include <unistd.h>
#include <stdlib.h>

#include "Player.h"

using namespace std;
class Screen {
public: 
		void initScreen();
		void displayScore(Player player);
		void write(string msg);
		void clearScreen();
		void home();
		void setCursor(int row, int column);
		Screen();
};

#endif