#include "sonido.h"

Sonido::Sonido(int _pin) {
pin = _pin;
}

int Sonido::read() {
return analogRead(pin);
}