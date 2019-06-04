#include "Buzzer.h"

enum Songs {
    tetris
};

Buzzer::Buzzer() : PWMActuator(){}

Buzzer::Buzzer(int pin) : PWMActuator(pin){}

void Buzzer::playNote(float freq){
    this->setPeriodUs((int)(1000000.0/freq));
}

void Buzzer::playSong(Songs song) {
    switch(song){
        case tetris:
            playSong(tetris[][]);
            break;
        default:
            break;
    }
}

void Buzzer::readSong(const list<pair<string,string>> sequence){
	list<pair<string,string>>::iterator songposition;
    float sleepTime = 0.0;
    float frequency = 0.0;

    this->playPWM(0.0);

	for (songposition = sequence.begin();songposition != sequence.end();songposition++) {
        frequency = notes[songposition->first];
        sleepTime = speed[songposition->second];
        this->playNote(frequency);
        usleep(500000);
    }
}

Buzzer::~Buzzer(){}

/*pin=12 #This is one of two Hardware PWM Pins of the RPi, every other pin will work fine aswell, but software emulated (higher CPU load!)
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(pin, GPIO.OUT)
p=GPIO.PWM(pin, 10)*/

/*#Note frequencies taken from this site 'https://pages.mtu.edu/~suits/notefreqs.html'
#Below notes are mixed in octave (fourth & fifth), for tetris example
#The '#' note is my variable for a break/pause, it's freq is 0.5. This is not silenced, but the lowest I could get.
#A better way to silence the piezo would be by changing the dutycycle to 0% or 100% (constant off or on, no matter the frequency)*/
const map<string,float> notes = {
    {'C' , 523.25},
    {'D' , 587.33},
    {'E' , 659.25},
    {'F' , 349.23},
    {'G' , 392.00},
    {'A' , 440.00},
    {'B' , 493.88},
    {'#' , 0.0},
    {'Ab' , 415.30}
};

/* Divide a whole note to get a half note doesn't sound good, duration timings are therefore not divided by two. */
const map<string,float> speed = {
    {'sw' , 1},
    {'w' , 0.8},
    {'h' , 0.6},
    {'q' , 0.45},
    {'qh' , 0.25},
    {'qhh' , 0.15}
};

/* Main Part of tetris, sequence 1
note*/

const list<pair<string,string>> tetris = {
    {'E','q'},
    {'B','qh'},
    {'C','qh'},
    {'D','q'},
    {'C','qh'},
    {'B','qh'},
    {'A','q'},
    {'A','qh'},
    {'C','qh'},
    {'E','q'},
    {'D','qh'},
    {'C','q'},
    {'B','qhh'},
    {'C','q'},
    {'D','q'},
    {'E','q'},
    {'C','h'},
    {'A','qh'},
    {'A','q'},
    {'D','qh'},
    {'F','qh'},
    {'A','h'},
    {'G','qhh'},
    {'F','h'},
    {'E','qh'},
    {'C','qh'},
    {'E','h'},
    {'D','qhh'},
    {'C','h'},
    {'B','qh'},
    {'B','qh'},
    {'C','q'},
    {'D','q'},
    {'E','qh'},
    {'C','h'},
    {'A','h'},
    {'A','h'},
    {'#','w'}
};
/* #Break, sequence 2 */ 
/*const string s2[] = ['E-sw','C-sw','D-sw','B-sw','C-sw','A-sw','Ab-sw','B-w','#-q',
'E-sw','C-sw','D-sw','B-sw','C-h','A-h','A-h','Ab-sw','#-sw'];*/

/* #Whole song from above sequences, Theme A */

//const string tetris[][] = [s1,s1,s2,s1,s1,s2,s1];

