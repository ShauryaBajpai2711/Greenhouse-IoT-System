#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define SOIL A0
#define RELAY 7

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(RELAY, OUTPUT);
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  int soil = analogRead(SOIL);

  Serial.print("Temp: ");
  Serial.println(temp);
  Serial.print("Humidity: ");
  Serial.println(hum);
  Serial.print("Soil: ");
  Serial.println(soil);

  // Automatic watering
  if (soil < 400) {
    digitalWrite(RELAY, HIGH); // Pump ON
  } else {
    digitalWrite(RELAY, LOW);  // Pump OFF
  }

  delay(2000);
}
