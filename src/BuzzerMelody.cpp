/*
 * BuzzerMelody.cpp
 * 
 * 
 * 
 * Written by Jean Elias
 * 
 */

#include "BuzzerMelody.h"
#include <avr/pgmspace.h>

// Auxliary function to handle millis overflow
uint32_t GetMillisDiff(uint32_t current_time, uint32_t previous_time) {
    if(current_time > previous_time) {
        return (current_time - previous_time);
    }
    else {
        return (sizeof(uint32_t) - previous_time) + current_time;
    }
}

// Generic funtion to play a tone
void BuzzerMelody::tonePlay(uint16_t freq) {
  // #ifdef Arduino
  tone(_buzzerPin, freq);
  // #elif ESP32
  //
  // #endif
}

// Generic funtion to stop a tone playing
void BuzzerMelody::toneStop() {
  // #ifdef Arduino
  noTone(_buzzerPin);
  // #elif ESP32
  //
  // #endif  
}


// Constructor
BuzzerMelody::BuzzerMelody(uint8_t buzzerPin, uint16_t numOfNotes, const Note *melody) {
  _buzzerPin = buzzerPin;
  _numOfNotes = numOfNotes;
  _melody = melody;
}

// Setup function
void BuzzerMelody::setup() {

}

void BuzzerMelody::loop(uint32_t currentTime) {
  if(currentTime == 0) {
    currentTime = millis();
  }

  switch(_bmState) {
    case INIT:
      // Reset index to start from first note of the melody
      _curNoteIndex = 0;
      // Load current note parameters from the flash memory
      _curNote.duration = pgm_read_word(&_melody[_curNoteIndex].duration);
      _curNote.frequency = pgm_read_word(&_melody[_curNoteIndex].frequency);

      if(_curNote.frequency == NOTE_REST) {
        toneStop(); //noTone(_buzzerPin);
      }
      else {
        tonePlay(_curNote.frequency); //tone(_buzzerPin, _curNote.frequency);
      }
      _previousTime = currentTime;
      _bmState = PLAYING;
      break;

    case PLAYING:
      // From the full duration of a note, part of that (PLAY_FACTOR multiplier) will actually play and the remainder will stay silent.
      _playDuration = (_curNote.duration * PLAY_FACTOR);
      if(GetMillisDiff(currentTime, _previousTime) >= _playDuration) {
        toneStop(); //noTone(_buzzerPin);
        _previousTime = currentTime;
        _bmState = RESTING;
      }
      break;

    case RESTING:
      // For the remainder of the note duration, stay silent.
      if(GetMillisDiff(currentTime, _previousTime) >= (_curNote.duration - _playDuration)) {
        // Move to next note in the melody
        _curNoteIndex += 1;
        // Stop tone and stop the melody (move to IDLE state) if reached the end of the melody
        if(_curNoteIndex >= _numOfNotes) {
          toneStop(); //noTone(_buzzerPin);
          _bmState = IDLE;
          break;
        }
        // Load current note parameters from the flash memory
        _curNote.frequency = pgm_read_word(&_melody[_curNoteIndex].frequency);
        _curNote.duration = pgm_read_word(&_melody[_curNoteIndex].duration);

        if(_curNote.frequency == NOTE_REST) {
          toneStop(); //noTone(_buzzerPin);
        }
        else {
          tonePlay(_curNote.frequency); //tone(_buzzerPin, _curNote.frequency);
        }
        _previousTime = currentTime;
        _bmState = PLAYING;
      }    
      break;

    case IDLE:
      // Do nothing, wait for external command to restart
      break;
  }
}

void BuzzerMelody::play() {
  _bmState = INIT;
}

void BuzzerMelody::stop() {
  noTone(_buzzerPin);
  _bmState = IDLE;
}

uint8_t BuzzerMelody::getState() {
  return _bmState;
}

void BuzzerMelody::loadMelody(uint16_t numOfNotes, const Note *melody) {
  _melody = melody;
  _numOfNotes = numOfNotes;
}
