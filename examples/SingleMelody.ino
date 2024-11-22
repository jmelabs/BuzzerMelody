/*
  Single Melody example using the BuzzerMelody library

  Written by Jean Elias

*/

#include <Arduino.h>

#include <BuzzerMelody.h>
#include "SuperMarioBrosTheme.h"


const uint8_t BUZZER_0_PIN = 9;

BuzzerMelody buzzerMelody0(BUZZER_0_PIN, NUM_OF_NOTES0, melody0);


void setup() {
  buzzerMelody0.play();
}

void loop() {
  buzzerMelody0.loop();
}

