#ifndef MAGNETICO_H
#define MAGNETICO_H

#include <Arduino.h>

class Magnetico {
  public:
    Magnetico(int _pin);
    int read();
    void show();

  private:
    int pin;
    int valor;
};

#endif