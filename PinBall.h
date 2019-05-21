#ifndef PINBALL_H
#define PINBALL_H

#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#
#include "Screen.h"
#include "Player.h"


class PinBall{
	private:
		int nbTry;
		Screen sc;
		Player player;
	public:
		PinBall();
		~PinBall();
		void startGame(String player_name);
		void loopGame();
		int stopGame();
		int getNbTry();
};

#endif