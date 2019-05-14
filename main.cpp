#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
using namespace std;

#define PWM_PIN 5

int main(void){

	mraa_pwm_context pwmPin;
	float value = 0.0;
	
	mraa_init();
	pwmPin = mraa_pwm_init(PWM_PIN);
	
	mraa_pwm_period_ms(pwmPin,1.0);
	
	mraa_pwm_enable(pwmPin, 1);
	
	delta = 0.05;
	duty = 1;
	
	while(1){
		value =+ 0.01;
		mraa_pwm_write(pwmPin, value);
		usleep(50000);
		if(value >= 1.0){
			value = 0.0;
		}
	}
	return 0;
}