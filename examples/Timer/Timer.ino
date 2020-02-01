#include "Timer.h"

Timer timer;

void setup() {
  Serial.begin(9600);
  timer.start();
  delay(1000);
  timer.stop();
  Serial.print("time elapsed ms: ");
  Serial.println(timer.read());
  }

void loop() {
  return;
  }

void loop() {
  return;
  }
