/*
 * BuzzerMelody.cpp
 * 
 * 
 * 
 * Written by Jean Elias
 * 
 */

#include "BuzzerMelody.h"
#ifndef ESP32
#include <avr/pgmspace.h>
#endif

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
  #ifdef ESP32
  ledcWriteTone(_buzzerChannel, freq);
  #else
  if(freq == NOTE_REST) {
    noTone(_buzzerPin);
  }
  else {
    tone(_buzzerPin, freq);
  }    
  #endif
}

// Generic funtion to stop a tone playing
void BuzzerMelody::toneStop() {
  #ifdef ESP32
  ledcWriteTone(_buzzerChannel, 0);
  #else
  noTone(_buzzerPin);
  #endif  
}

// Load current note local variable
void BuzzerMelody::loadCurNote() {
  // Load current note parameters from the flash memory
  _curNote.duration = pgm_read_word(&_melody[_curNoteIndex].duration);
  _curNote.frequency = pgm_read_word(&_melody[_curNoteIndex].frequency);

  // From the full duration of a note, part of that (_playFactor multiplier) will actually play to 
  // distiguish between two consecutive notes
  // _speedFactor can be used to increase or decrease the tempo of the song
  _playDuration = (_curNote.duration * _playFactor * _speedFactor);
}

// Constructor Arduino boards
BuzzerMelody::BuzzerMelody(uint8_t buzzerPin, uint16_t numOfNotes, const Note *melody) {
  _buzzerPin = buzzerPin;
  _numOfNotes = numOfNotes;
  _melody = melody;
}

// Constructor ESP32 boards
#ifdef ESP32
BuzzerMelody::BuzzerMelody(uint8_t buzzerPin, uint8_t buzzerChannel, uint16_t numOfNotes, const Note *melody) {
  _buzzerPin = buzzerPin;
  pinMode(_buzzerPin, OUTPUT);
  _buzzerChannel = buzzerChannel;
  // Attach the pin to the LEDC PWM channel
  ledcAttachPin(_buzzerPin, _buzzerChannel);
  // Initialize channel with random frequency
  ledcSetup(_buzzerChannel, 0, 10);

  _numOfNotes = numOfNotes;
  _melody = melody;

}
#endif

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
      loadCurNote();

      tonePlay(_curNote.frequency);
      _previousTime = currentTime;
      _bmState = PLAYING;
      break;

    case PLAYING:
      if(GetMillisDiff(currentTime, _previousTime) >= _playDuration) {
        toneStop(); 
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
          toneStop(); 
          _bmState = IDLE;
          break;
        }
        // Load current note parameters from the flash memory
        loadCurNote();

        tonePlay(_curNote.frequency);

        _previousTime = currentTime;
        _bmState = PLAYING;
      }    
      break;

    case PAUSED:
      if(_evPlay) {
        _evPlay = false;
        loadCurNote();
        tonePlay(_curNote.frequency);
        _previousTime = currentTime;
        _bmState = PLAYING;
      }
      break;

    case IDLE:
      // Wait for external event to restart
      if(_evPlay) {
        _evPlay = false;
        _bmState = INIT;
      }
      break;
  }
}

void BuzzerMelody::play() {
  _evPlay = true;
}

void BuzzerMelody::stop() {
  toneStop();
  _bmState = IDLE;
}

void BuzzerMelody::pause() {
  toneStop();
  _bmState = PAUSED;
}

uint8_t BuzzerMelody::getState() {
  return _bmState;
}

void BuzzerMelody::loadMelody(uint16_t numOfNotes, const Note *melody) {
  _melody = melody;
  _numOfNotes = numOfNotes;
}

void BuzzerMelody::setPlayFactor(float playFactor) {
  _playFactor = playFactor;
}

void BuzzerMelody::setSpeedFactor(float speedFactor) {
  _speedFactor = speedFactor;
}