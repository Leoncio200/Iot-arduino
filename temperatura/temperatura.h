#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include <Arduino.h>
#include <DHT.h>

class Temperatura {
  public:
    Temperatura(int pin);
    float readTemperature();
    float readHumidity();
    void show();

  private:
    int _pin;
    DHT _dht;
    float _temperature;
    float _humidity;
};

#endif
