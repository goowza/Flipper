#ifndef PINBALL_H
#define PINBALL_H

#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>


class PinBall{
	private:
		int nbTry;
	public:
		PinBall();
		~PinBall();
		void startGame();
		void loopGame();
		void stopGame();
		int getNbTry();
}

#endif