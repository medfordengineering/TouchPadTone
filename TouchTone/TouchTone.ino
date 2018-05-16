#include <Wire.h>
#include "Adafruit_MPR121.h"

int touch;
Adafruit_MPR121 cap = Adafruit_MPR121();

void setup() {
  Serial.begin(9600);
  cap.begin(0x5A);
}

void loop() {
  touch = cap.touched();
  if (bitRead(touch, 4) == true)
    tone(8, 440);
  if (bitRead(touch, 4) == false)
    noTone(8);
}

