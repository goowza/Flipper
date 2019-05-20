#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <string>
using namespace std;
class Screen{
	private :
	public : 
		void initScreen();
		void afficherScore();
		void Ecrire(string msg);
		void clearScreen();
		void home();
		void nbLine(int row, int column);
		Screen();
};

#endif