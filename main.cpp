#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#include <unistd.h>
#include <string.h>

#include "PinBall.h"

using namespace std;

ostream & operator << (ostream &flux, Player const & player) {
    player.displayPlayer(flux);
	return flux;
} 

int main(void){
	int fin = 0;
	Pins P;
	P.pinDetectors = 0;
	P.pinBuzzer = 5;
	PinBall pinball(P);
	pinball.startGame();
	while(pinball.loopGame()){
		cout << pinball.getPlayer() << endl;
	}
	pinball.stopGame();
	return 0;
}
