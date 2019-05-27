#ifndef PINBALL_H
#define PINBALL_H

#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#include "Screen.h"
#include "Player.h"
#include "BallDetector.h"
#include "Buzzer.h"
#include "Led.h"
#include "Flipper.h"

#include <vector>

struct Pins {
	int pinBuzzer;
	int pinFlipperButtonLeft;
	int pinFlipperButtonRight;
	int pinFlipperSolenoidLeft;
	int pinFlipperSolenoidRight;
	vector<int> pinDetectors;
	vector<int> pinLeds;
};

class PinBall{
	private:
		int nbTry;
		Screen scoreboard;
		Player player;
		vector<BallDetector> detectors;
		Buzzer buzzer;
		Flipper flipper_left;
		Flipper flipper_right;
		vector<Led> leds;

	public:
		PinBall(Pins pin_definition);
		~PinBall();
		void init();
		void startGame();
		void loopGame();
		int stopGame();
		int getNbTry();
};

#endif