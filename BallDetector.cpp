#include "BallDetector.h"

BallDetector::BallDetector(int pin) : AnalogSensor(pin) {
    this->treshold = TRESHOLD_DEFAULT;
}

// return true if the photosensor value is under the treshold value
bool BallDetector::isDetected() {
    return (this->getSensorValue() < this->treshold);
}

void BallDetector::setTreshold(int treshold) {
    this->treshold = treshold;
}

BallDetector::~BallDetector() {}
