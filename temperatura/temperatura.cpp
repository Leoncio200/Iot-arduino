#include <DHT.h>
#include "temperatura.h"

Temperatura::Temperatura(int pin) : _pin(pin), _dht(pin, DHT11) {}

float Temperatura::readTemperature() {
  _temperature = _dht.readTemperature();
  return _temperature;
}

float Temperatura::readHumidity() {
  _humidity = _dht.readHumidity();
  return _humidity;
}

void Temperatura::show() {
  Serial.print("Temperatura: ");
  Serial.print(_temperature);
  Serial.print("°C | Humedad: ");
  Serial.print(_humidity);
  Serial.println("%");
}
