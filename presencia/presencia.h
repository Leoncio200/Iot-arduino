#ifndef PRESENCIA_H
#define PRESENCIA_H

#include <Arduino.h>

class Presencia {
  public:
    Presencia(int pin, int ledPin);
    void show();
    int readPresencia();
    void function();

  private: 
    int _pin;
    int _ledPin;
    int _valor;
};

#endif
