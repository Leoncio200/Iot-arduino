#ifndef HUMO_H
#define HUMO_H

#include <Arduino.h>

class Humo{
  public:
    Humo (int pin);
    int readHumo();
    void show();

  private: 
    int _pin;
    int _gas;
};

#endif
