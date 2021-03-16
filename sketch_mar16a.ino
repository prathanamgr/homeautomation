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
Blynk.syncAll(); 
}

void loop()
{
Blynk.run();
}
