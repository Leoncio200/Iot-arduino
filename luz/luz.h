#ifndef LUZ_H
#define LUZ_H

#include <Arduino.h>

class Luz{
  public:
    Luz(int pin, int ledPin);
      void readLuz();
      void show();
      void function();

    private: 
      int _pin;
      int _valor;
      int _ledPin;
  };
#endif
