#include "DHT.h"
#include "Temperatura.h"

const int DHTPIN = 7;
const int DHTTYPE = DHT11;

DHT dht(DHTPIN, DHTTYPE);
float temp, hum;

Temperatura temperatura(DHTPIN);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  temperatura.readTemperature();

  if (Serial.available() > 0) {
    String a = Serial.readStringUntil('\n');

    if (a == "TH" || a == "th") {
      temperatura.show();
    }
  }
}



void readTemperature() {
  delay(2000);

  temp = dht.readTemperature();
  hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Error al leer los datos del sensor DHT11.");
    return;
  }

  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.print("°C | Humedad: ");
  Serial.print(hum);
  Serial.println("%");
}
