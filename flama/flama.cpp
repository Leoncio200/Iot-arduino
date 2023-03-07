#include "flama.h"

Flama::Flama(int _pin) {
pinMode(_pin, INPUT);
pin = _pin;
}

bool Flama::read() {
return digitalRead(pin);
}