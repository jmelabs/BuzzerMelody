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
        PAUSED,
        IDLE
    };

    // Constructor
    BuzzerMelody(uint8_t buzzerPin, uint16_t numOfNotes, const Note *melody);
    #ifdef ESP32
    BuzzerMelody(uint8_t buzzerPin, uint8_t buzzerChannel, uint16_t numOfNotes, const Note *melody);
    #endif

    // Methods
    void setup();
    void loop(uint32_t currentTime = 0);

    void play();
    void stop();
    void pause();
    uint8_t getState();
    void loadMelody(uint16_t numOfNotes, const Note *melody);

  private:
    uint8_t _buzzerPin;
    uint8_t _buzzerChannel;
    uint16_t _numOfNotes;
    const Note *_melody;
    Note _curNote;
    uint16_t _curNoteIndex;
    uint32_t _previousTime;
    BM_SM _bmState = IDLE;
    bool _evPlay = false;

    float _playFactor = 0.7;
    float _speedFactor = 1;
    uint16_t _playDuration = 0;

    void tonePlay(uint16_t freq);
    void toneStop();
    void loadCurNote();
    void setPlayFactor(float playFactor);
    void setSpeedFactor(float speedFactor);

};

#endif /* BUZZER_MELODY_H */