#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  // start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nAuthor: Kevin Sar - 000390567");
  Serial.print("ESP8266 Chip ID: ");
  Serial.println(ESP.getChipId());
  Serial.print("Flash Chip ID: ");
  Serial.println(ESP.getFlashChipId());
  Serial.println("\n\nRunning Time in Milliseconds every 2 seconds: ");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  Serial.println();
  Serial.print(millis());
  Serial.println(" ms");
}