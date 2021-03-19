#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "YourAuthToken";
char ssid[] = "Softwarica";
char pass[] = "Coventry123";

void setup()
{
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
pinMode(D2, OUTPUT);
pinMode(D3, OUTPUT);
pinMode(D4, OUTPUT);

digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
}

void loop()
{
Blynk.run();
}
