#ifndef PINBALL_H
#define PINBALL_H

#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#include "Screen.h"


class PinBall{
	private:
		int nbTry;
		Screen sc;
	public:
		PinBall();
		~PinBall();
		void startGame();
		void loopGame();
		int stopGame();
		int getNbTry();
};

#endif