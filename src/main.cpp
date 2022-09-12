#include <Arduino.h>

/* 
* I, Justin Borzi, 000798465 certify that this material is my original
* work. No other person's work has been used without due 
* acknowledgement. (Replace with your own name and student number)
*/

void setup() {
  // Setup monitor thread.
  Serial.begin(115200);

  // Print Hello world. (1/2)
  Serial.println("\n\nHello World!");

  // Print Who I am, and the device's information.
  Serial.println("\nJustin Borzi, 000798465");
  Serial.print("Chip ESP8266 Chip ID: ");
  Serial.println(ESP.getChipId());
  Serial.print("Flash Chip ID: ");
  Serial.println(ESP.getFlashChipId());
  Serial.println();
}

void loop() {
  // Delay the execution for 2 seconds then print the time elapsed
  // since the board was started
  delay(2000);
  Serial.println(millis());
}