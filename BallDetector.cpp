#include "BallDetector.h"

BallDetector::BallDetector(int pin) {
    this->aio_context = mraa_aio_init(pin);
    this->treshold = TRESHOLD_DEFAULT;
}

int BallDetector::getSensorValue() {
    return mraa_aio_read(this->aio_context);
}

// return true if the photosensor value is under the treshold value
bool BallDetector::isDetected() {
    return (this->getSensorValue() < this->treshold);
}

void BallDetector::setTreshold(int treshold) {
    this->treshold = treshold;
}

BallDetector::~BallDetector() {
    mraa_aio_close(this->aio_context);
}