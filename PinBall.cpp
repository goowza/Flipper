#include "PinBall.h"

using namespace std;

PinBall::PinBall(Pins pin_definition):detectors(pin_definition.pinDetectors), buzzer(pin_definition.pinBuzzer)
{
	this->ButtonStart = mraa_gpio_init(3);
	mraa_gpio_dir(this->ButtonStart, MRAA_GPIO_IN);
}

PinBall::~PinBall(){}


void PinBall::startGame(){
	this->buzzer.silence();

	this->scoreboard.write("Lancement du jeu...");
	while(!mraa_gpio_read(this->ButtonStart)){
	}
	this->scoreboard.clearScreen();
	this->scoreboard.displayScore(this->player);
	this->buzzer.playStartMusic();
	sleep(1);
	
}

int PinBall::loopGame(){
	int exit = 1;
	int score = this->player.getScore();
	if(this->detectors.isDetected()){
		this->player.addScore(5);
		this->buzzer.playPointMusic();
	}
	if(score != player.getScore()){
		this->scoreboard.displayScore(this->player);
		score = player.getScore();
	}

	if(mraa_gpio_read(this->ButtonStart)){
		exit = 0;
	}
	return exit;
}

int PinBall::stopGame(){
	this->buzzer.playStopMusic();
	this->scoreboard.clearScreen();
	this->scoreboard.home();	
	this->scoreboard.write("Fin du jeu");
	return -1;
}

Player PinBall::getPlayer() {
	return this->player;
}
