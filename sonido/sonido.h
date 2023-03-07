#ifndef SONIDO_H
#define SONIDO_H

#include <Arduino.h>

class Sonido {
public:
Sonido(int pin);
int read();
private:
int pin;
};

#endif