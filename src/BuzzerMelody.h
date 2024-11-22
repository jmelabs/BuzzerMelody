/*
 * BuzzerMelody.h
 * 
 * 
 * Written by Jean Elias
 * 
 */

#ifndef BUZZER_MELODY_H
#define BUZZER_MELODY_H

#include <Arduino.h>
#include "notes.h"

class BuzzerMelody {
  public:
    enum BM_SM {
        INIT = 0,
        PLAYING,
        RESTING,
        IDLE
    };

    // Constructor
    BuzzerMelody(uint8_t buzzerPin, uint16_t numOfNotes, const Note *melody);

    // Methods
    void setup();
    void loop(uint32_t currentTime = 0);

    void play();
    void stop();
    uint8_t getState();
    void loadMelody(uint16_t numOfNotes, const Note *melody);

  private:
    uint8_t _buzzerPin;
    uint16_t _numOfNotes;
    const Note *_melody;
    Note _curNote;
    uint16_t _curNoteIndex;

    uint32_t _previousTime;
    BM_SM _bmState = IDLE;

    const float PLAY_FACTOR = 0.7;
    uint16_t _playDuration = 0;

    void tonePlay(uint16_t freq);
    void toneStop();

};

#endif /* BUZZER_MELODY_H */