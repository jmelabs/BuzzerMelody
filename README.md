# Arduino BuzzerMelody Library

## Overview
This library provides a simple solution for playing one or more melodies on piezoelectric passive buzzers using the arduino core tone function in a non-blocking way.

## Get Started
To use more than one BuzzerMelody instance, the <i>Tone.cpp</i> Arduino core function needs to be updated.

Each BuzzerMelody object will use a different Arduino Timer peripheral. So, the maximum number of melodies allowed to be played in parallel will depend on your Arduino/MCU platform. See the list below for a quick summary:

| Arduino Platform (MCU)      | Number of Timers (Names)                  | Datasheet Link                                                                 |
|-------------------------|-------------------------------------------|--------------------------------------------------------------------------------|
| Arduino Uno Rev 3 (ATmega328P) | 3 (Timer0, Timer1, Timer2)               | [ATmega328P Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328P-Complete.pdf) |
| Arduino Mega (ATmega2560)| 6 (Timer0, Timer1, Timer2, Timer3, Timer4, Timer5) | [ATmega2560 Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/ATmega2560-Complete.pdf) |
| Arduino Leonardo (ATmega32U4) | 4 (Timer0, Timer1, Timer3, Timer4)  | [ATmega32U4 Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/ATmega32U4-Complete.pdf) |
| Arduino Nano (ATmega328P) | 3 (Timer0, Timer1, Timer2)              | [ATmega328P Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328P-Complete.pdf) |
| ESP32 Dev Module        | 4 (TIMER0, TIMER1, TIMER2, TIMER3 per core) | [ESP32 Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf) |


<b>Timer 0</b> is usually used by the millis() function, so it is recommended to avoid using that.

If you are using this library with other libraries, check if there are any conflicts with the timers used.

Once the tone function modification is implemented, you don't to need to worry about anything in the main application.


## How to use

Add the <BuzzerMelody.h> file to your code.<br>

Create a BuzzerMelody object passing the following as arguments:
- Buzzer Pin
- Array of notes (see example). 
- The total number of notes.

## Single Melody example
### Main file
```c
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
```

### Super Mario Bros melody header file
A melody shall be composed by an array of notes.

```h
#include <Arduino.h>
#include "notes.h"

const Note melody0[] PROGMEM = {
	{ NOTE_E6, 143 }, // Bar 1 | E in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 1 | E in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 1 | E in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 1 | C in octave 6 16th Note
    ...
```
A Note is a struct defined in the notes.h file composed by a frequency and a duration (in ms).

```c
typedef struct {
  uint16_t frequency;
  uint16_t duration;
} Note;
```
<br>

---
#### Written by Jean Elias