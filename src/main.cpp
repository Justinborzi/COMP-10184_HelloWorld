#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  Serial.println("\n\nHello World!\n\n");
  Serial.println("\nJustin Borzi, 000798465");
  Serial.println("Chip ESP8266 Chip ID: " + ESP.getChipId());
  Serial.println("Flash Chip ID: " + ESP.getFlashChipId());
}

void loop() {
  // Delay the execution for 2 seconds, then print the total elapsed miliseconds.
  delay(2000);
  Serial.println(millis());
}