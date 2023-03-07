#ifndef FLAMA_H
#define FLAMA_H
#include <Arduino.h>

class Flama {
public:
Flama(int _pin);
bool read();
private:
int pin;
};
#endif