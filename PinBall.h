#ifndef PINBALL_H
#define PINBALL_H

#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#include <unistd.h>
#include <vector>

#include "Screen.h"
#include "Player.h"
#include "BallDetector.h"
#include "Buzzer.h"
#include "Led.h"
#include "Flipper.h"

struct Pins {
	int pinBuzzer;
	int pinDetectors;
};

class PinBall{
	private:
		Screen scoreboard;
		Player player;
		Buzzer buzzer;
		mraa_gpio_context ButtonStart;
		BallDetector detectors;

	public:
		PinBall(Pins P);
		~PinBall();
		void init();
		void startGame();
		int loopGame();
		int stopGame();

		Player getPlayer();
};

#endif
