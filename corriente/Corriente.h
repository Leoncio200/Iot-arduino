#ifndef CORRIENTE_H
#define CORRIENTE_H

#include <Arduino.h>

class Corriente {
  public:
    Corriente(int _pin);
    float read();
  private:
    int pin;
};

#endif