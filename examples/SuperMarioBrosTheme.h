/*
 *	Music: Nintendo - Super Mario Bros Theme
 *
 *	Melody 0 | Main Melody
 *	
*/

#include <Arduino.h>
#include "notes.h"

const Note melody0[] PROGMEM = {
	{ NOTE_E6, 143 }, // Bar 1 | E in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 1 | E in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 1 | E in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 1 | C in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 1 | E in octave 6 Eighth Note
	{ NOTE_G6, 1142 }, // Bar 1 | G in octave 6 Half Note
	{ NOTE_C6, 429 }, // Bar 2 | C in octave 6 Dotted Eighth Note
	{ NOTE_G5, 429 }, // Bar 2 | G in octave 5 Dotted Eighth Note
	{ NOTE_E5, 429 }, // Bar 2 | E in octave 5 Dotted Eighth Note
	{ NOTE_A5, 286 }, // Bar 2 | A in octave 5 Eighth Note
	{ NOTE_B5, 286 }, // Bar 2 | B in octave 5 Eighth Note
	{ NOTE_AS5, 143 }, // Bar 2 | A-sharp in octave 5 16th Note
	{ NOTE_A5, 284 }, // Bar 2 | A-natural in octave 5 Eighth Note
	{ NOTE_G5, 143 }, // Bar 3 | G in octave 5 16th Note
	{ NOTE_E6, 286 }, // Bar 3 | E in octave 6 Eighth Note
	{ NOTE_G6, 143 }, // Bar 3 | G in octave 6 16th Note
	{ NOTE_A6, 286 }, // Bar 3 | A in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 3 | F in octave 6 16th Note
	{ NOTE_G6, 286 }, // Bar 3 | G in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 3 | E in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 3 | C in octave 6 16th Note
	{ NOTE_D6, 143 }, // Bar 3 | D in octave 6 16th Note
	{ NOTE_B5, 427 }, // Bar 3 | B in octave 5 Dotted Eighth Note
	{ NOTE_C6, 429 }, // Bar 4 | C in octave 6 Dotted Eighth Note
	{ NOTE_G5, 429 }, // Bar 4 | G in octave 5 Dotted Eighth Note
	{ NOTE_E5, 429 }, // Bar 4 | E in octave 5 Dotted Eighth Note
	{ NOTE_A5, 286 }, // Bar 4 | A in octave 5 Eighth Note
	{ NOTE_B5, 286 }, // Bar 4 | B in octave 5 Eighth Note
	{ NOTE_AS5, 143 }, // Bar 4 | A-sharp in octave 5 16th Note
	{ NOTE_A5, 284 }, // Bar 4 | A-natural in octave 5 Eighth Note
	{ NOTE_G5, 143 }, // Bar 5 | G in octave 5 16th Note
	{ NOTE_E6, 286 }, // Bar 5 | E in octave 6 Eighth Note
	{ NOTE_G6, 143 }, // Bar 5 | G in octave 6 16th Note
	{ NOTE_A6, 286 }, // Bar 5 | A in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 5 | F in octave 6 16th Note
	{ NOTE_G6, 286 }, // Bar 5 | G in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 5 | E in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 5 | C in octave 6 16th Note
	{ NOTE_D6, 143 }, // Bar 5 | D in octave 6 16th Note
	{ NOTE_B5, 427 }, // Bar 5 | B in octave 5 Dotted Eighth Note
	{ NOTE_REST, 286 }, // Bar 6 | Eighth Rest
	{ NOTE_G6, 143 }, // Bar 6 | G in octave 6 16th Note
	{ NOTE_FS6, 143 }, // Bar 6 | F-sharp in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 6 | F-natural in octave 6 16th Note
	{ NOTE_DS6, 286 }, // Bar 6 | D-sharp in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 6 | E in octave 6 Eighth Note
	{ NOTE_GS5, 143 }, // Bar 6 | G-sharp in octave 5 16th Note
	{ NOTE_A5, 143 }, // Bar 6 | A in octave 5 16th Note
	{ NOTE_C6, 286 }, // Bar 6 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 6 | A in octave 5 16th Note
	{ NOTE_C6, 143 }, // Bar 6 | C in octave 6 16th Note
	{ NOTE_D6, 141 }, // Bar 6 | D-natural in octave 6 16th Note
	{ NOTE_REST, 286 }, // Bar 7 | Eighth Rest
	{ NOTE_G6, 143 }, // Bar 7 | G in octave 6 16th Note
	{ NOTE_FS6, 143 }, // Bar 7 | F-sharp in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 7 | F-natural in octave 6 16th Note
	{ NOTE_DS6, 286 }, // Bar 7 | D-sharp in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 7 | E in octave 6 Eighth Note
	{ NOTE_C7, 286 }, // Bar 7 | C in octave 7 Eighth Note
	{ NOTE_C7, 143 }, // Bar 7 | C in octave 7 16th Note
	{ NOTE_C7, 570 }, // Bar 7 | C in octave 7 Quarter Note
	{ NOTE_REST, 286 }, // Bar 8 | Eighth Rest
	{ NOTE_G6, 143 }, // Bar 8 | G in octave 6 16th Note
	{ NOTE_FS6, 143 }, // Bar 8 | F-sharp in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 8 | F-natural in octave 6 16th Note
	{ NOTE_DS6, 286 }, // Bar 8 | D-sharp in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 8 | E in octave 6 Eighth Note
	{ NOTE_GS5, 143 }, // Bar 8 | G-sharp in octave 5 16th Note
	{ NOTE_A5, 143 }, // Bar 8 | A in octave 5 16th Note
	{ NOTE_C6, 286 }, // Bar 8 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 8 | A in octave 5 16th Note
	{ NOTE_C6, 143 }, // Bar 8 | C in octave 6 16th Note
	{ NOTE_D6, 141 }, // Bar 8 | D-natural in octave 6 16th Note
	{ NOTE_REST, 286 }, // Bar 9 | Eighth Rest
	{ NOTE_DS6, 429 }, // Bar 9 | D-sharp in octave 6 Dotted Eighth Note
	{ NOTE_D6, 429 }, // Bar 9 | D-natural in octave 6 Dotted Eighth Note
	{ NOTE_C6, 1142 }, // Bar 9 | C in octave 6 Half Note
	{ NOTE_REST, 286 }, // Bar 10 | Eighth Rest
	{ NOTE_G6, 143 }, // Bar 10 | G in octave 6 16th Note
	{ NOTE_FS6, 143 }, // Bar 10 | F-sharp in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 10 | F-natural in octave 6 16th Note
	{ NOTE_DS6, 286 }, // Bar 10 | D-sharp in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 10 | E in octave 6 Eighth Note
	{ NOTE_GS5, 143 }, // Bar 10 | G-sharp in octave 5 16th Note
	{ NOTE_A5, 143 }, // Bar 10 | A in octave 5 16th Note
	{ NOTE_C6, 286 }, // Bar 10 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 10 | A in octave 5 16th Note
	{ NOTE_C6, 143 }, // Bar 10 | C in octave 6 16th Note
	{ NOTE_D6, 141 }, // Bar 10 | D-natural in octave 6 16th Note
	{ NOTE_REST, 286 }, // Bar 11 | Eighth Rest
	{ NOTE_G6, 143 }, // Bar 11 | G in octave 6 16th Note
	{ NOTE_FS6, 143 }, // Bar 11 | F-sharp in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 11 | F-natural in octave 6 16th Note
	{ NOTE_DS6, 286 }, // Bar 11 | D-sharp in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 11 | E in octave 6 Eighth Note
	{ NOTE_C7, 286 }, // Bar 11 | C in octave 7 Eighth Note
	{ NOTE_C7, 143 }, // Bar 11 | C in octave 7 16th Note
	{ NOTE_C7, 570 }, // Bar 11 | C in octave 7 Quarter Note
	{ NOTE_REST, 286 }, // Bar 12 | Eighth Rest
	{ NOTE_G6, 143 }, // Bar 12 | G in octave 6 16th Note
	{ NOTE_FS6, 143 }, // Bar 12 | F-sharp in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 12 | F-natural in octave 6 16th Note
	{ NOTE_DS6, 286 }, // Bar 12 | D-sharp in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 12 | E in octave 6 Eighth Note
	{ NOTE_GS5, 143 }, // Bar 12 | G-sharp in octave 5 16th Note
	{ NOTE_A5, 143 }, // Bar 12 | A in octave 5 16th Note
	{ NOTE_C6, 286 }, // Bar 12 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 12 | A in octave 5 16th Note
	{ NOTE_C6, 143 }, // Bar 12 | C in octave 6 16th Note
	{ NOTE_D6, 141 }, // Bar 12 | D-natural in octave 6 16th Note
	{ NOTE_REST, 286 }, // Bar 13 | Eighth Rest
	{ NOTE_DS6, 429 }, // Bar 13 | D-sharp in octave 6 Dotted Eighth Note
	{ NOTE_D6, 429 }, // Bar 13 | D-natural in octave 6 Dotted Eighth Note
	{ NOTE_C6, 1142 }, // Bar 13 | C in octave 6 Half Note
	{ NOTE_C6, 143 }, // Bar 14 | C in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 14 | C in octave 6 Eighth Note
	{ NOTE_C6, 286 }, // Bar 14 | C in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 14 | C in octave 6 16th Note
	{ NOTE_D6, 286 }, // Bar 14 | D in octave 6 Eighth Note
	{ NOTE_E6, 143 }, // Bar 14 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 14 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 14 | A in octave 5 16th Note
	{ NOTE_G5, 570 }, // Bar 14 | G in octave 5 Quarter Note
	{ NOTE_C6, 143 }, // Bar 15 | C in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 15 | C in octave 6 Eighth Note
	{ NOTE_C6, 286 }, // Bar 15 | C in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 15 | C in octave 6 16th Note
	{ NOTE_D6, 143 }, // Bar 15 | D in octave 6 16th Note
	{ NOTE_E6, 143 }, // Bar 15 | E in octave 6 16th Note
	{ NOTE_REST, 1142 }, // Bar 15 | Half Rest
	{ NOTE_C6, 143 }, // Bar 16 | C in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 16 | C in octave 6 Eighth Note
	{ NOTE_C6, 286 }, // Bar 16 | C in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 16 | C in octave 6 16th Note
	{ NOTE_D6, 286 }, // Bar 16 | D in octave 6 Eighth Note
	{ NOTE_E6, 143 }, // Bar 16 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 16 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 16 | A in octave 5 16th Note
	{ NOTE_G5, 570 }, // Bar 16 | G in octave 5 Quarter Note
	{ NOTE_E6, 143 }, // Bar 17 | E in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 17 | E in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 17 | E in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 17 | C in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 17 | E in octave 6 Eighth Note
	{ NOTE_G6, 1142 }, // Bar 17 | G in octave 6 Half Note
	{ NOTE_C6, 429 }, // Bar 18 | C in octave 6 Dotted Eighth Note
	{ NOTE_G5, 429 }, // Bar 18 | G in octave 5 Dotted Eighth Note
	{ NOTE_E5, 429 }, // Bar 18 | E in octave 5 Dotted Eighth Note
	{ NOTE_A5, 286 }, // Bar 18 | A in octave 5 Eighth Note
	{ NOTE_B5, 286 }, // Bar 18 | B in octave 5 Eighth Note
	{ NOTE_AS5, 143 }, // Bar 18 | A-sharp in octave 5 16th Note
	{ NOTE_A5, 284 }, // Bar 18 | A-natural in octave 5 Eighth Note
	{ NOTE_G5, 143 }, // Bar 19 | G in octave 5 16th Note
	{ NOTE_E6, 286 }, // Bar 19 | E in octave 6 Eighth Note
	{ NOTE_G6, 143 }, // Bar 19 | G in octave 6 16th Note
	{ NOTE_A6, 286 }, // Bar 19 | A in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 19 | F in octave 6 16th Note
	{ NOTE_G6, 286 }, // Bar 19 | G in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 19 | E in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 19 | C in octave 6 16th Note
	{ NOTE_D6, 143 }, // Bar 19 | D in octave 6 16th Note
	{ NOTE_B5, 427 }, // Bar 19 | B in octave 5 Dotted Eighth Note
	{ NOTE_C6, 429 }, // Bar 20 | C in octave 6 Dotted Eighth Note
	{ NOTE_G5, 429 }, // Bar 20 | G in octave 5 Dotted Eighth Note
	{ NOTE_E5, 429 }, // Bar 20 | E in octave 5 Dotted Eighth Note
	{ NOTE_A5, 286 }, // Bar 20 | A in octave 5 Eighth Note
	{ NOTE_B5, 286 }, // Bar 20 | B in octave 5 Eighth Note
	{ NOTE_AS5, 143 }, // Bar 20 | A-sharp in octave 5 16th Note
	{ NOTE_A5, 284 }, // Bar 20 | A-natural in octave 5 Eighth Note
	{ NOTE_G5, 143 }, // Bar 21 | G in octave 5 16th Note
	{ NOTE_E6, 286 }, // Bar 21 | E in octave 6 Eighth Note
	{ NOTE_G6, 143 }, // Bar 21 | G in octave 6 16th Note
	{ NOTE_A6, 286 }, // Bar 21 | A in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 21 | F in octave 6 16th Note
	{ NOTE_G6, 286 }, // Bar 21 | G in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 21 | E in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 21 | C in octave 6 16th Note
	{ NOTE_D6, 143 }, // Bar 21 | D in octave 6 16th Note
	{ NOTE_B5, 427 }, // Bar 21 | B in octave 5 Dotted Eighth Note
	{ NOTE_E6, 143 }, // Bar 22 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 22 | C in octave 6 Eighth Note
	{ NOTE_G5, 429 }, // Bar 22 | G in octave 5 Dotted Eighth Note
	{ NOTE_GS5, 286 }, // Bar 22 | G-sharp in octave 5 Eighth Note
	{ NOTE_A5, 143 }, // Bar 22 | A in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 22 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 22 | F in octave 6 16th Note
	{ NOTE_A5, 570 }, // Bar 22 | A in octave 5 Quarter Note
	{ NOTE_B5, 143 }, // Bar 23 | B in octave 5 16th Note
	{ NOTE_A6, 286 }, // Bar 23 | A in octave 6 Eighth Note
	{ NOTE_A6, 143 }, // Bar 23 | A in octave 6 16th Note
	{ NOTE_A6, 143 }, // Bar 23 | A in octave 6 16th Note
	{ NOTE_G6, 286 }, // Bar 23 | G in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 23 | F in octave 6 16th Note
	{ NOTE_E6, 143 }, // Bar 23 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 23 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 23 | A in octave 5 16th Note
	{ NOTE_G5, 570 }, // Bar 23 | G in octave 5 Quarter Note
	{ NOTE_E6, 143 }, // Bar 24 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 24 | C in octave 6 Eighth Note
	{ NOTE_G5, 429 }, // Bar 24 | G in octave 5 Dotted Eighth Note
	{ NOTE_GS5, 286 }, // Bar 24 | G-sharp in octave 5 Eighth Note
	{ NOTE_A5, 143 }, // Bar 24 | A in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 24 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 24 | F in octave 6 16th Note
	{ NOTE_A5, 570 }, // Bar 24 | A in octave 5 Quarter Note
	{ NOTE_B5, 143 }, // Bar 25 | B in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 25 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 25 | F in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 25 | F in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 25 | E in octave 6 Eighth Note
	{ NOTE_D6, 143 }, // Bar 25 | D in octave 6 16th Note
	{ NOTE_C6, 1142 }, // Bar 25 | C in octave 6 Half Note
	{ NOTE_E6, 143 }, // Bar 26 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 26 | C in octave 6 Eighth Note
	{ NOTE_G5, 429 }, // Bar 26 | G in octave 5 Dotted Eighth Note
	{ NOTE_GS5, 286 }, // Bar 26 | G-sharp in octave 5 Eighth Note
	{ NOTE_A5, 143 }, // Bar 26 | A in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 26 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 26 | F in octave 6 16th Note
	{ NOTE_A5, 570 }, // Bar 26 | A in octave 5 Quarter Note
	{ NOTE_B5, 143 }, // Bar 27 | B in octave 5 16th Note
	{ NOTE_A6, 286 }, // Bar 27 | A in octave 6 Eighth Note
	{ NOTE_A6, 143 }, // Bar 27 | A in octave 6 16th Note
	{ NOTE_A6, 143 }, // Bar 27 | A in octave 6 16th Note
	{ NOTE_G6, 286 }, // Bar 27 | G in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 27 | F in octave 6 16th Note
	{ NOTE_E6, 143 }, // Bar 27 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 27 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 27 | A in octave 5 16th Note
	{ NOTE_G5, 570 }, // Bar 27 | G in octave 5 Quarter Note
	{ NOTE_E6, 143 }, // Bar 28 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 28 | C in octave 6 Eighth Note
	{ NOTE_G5, 429 }, // Bar 28 | G in octave 5 Dotted Eighth Note
	{ NOTE_GS5, 286 }, // Bar 28 | G-sharp in octave 5 Eighth Note
	{ NOTE_A5, 143 }, // Bar 28 | A in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 28 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 28 | F in octave 6 16th Note
	{ NOTE_A5, 570 }, // Bar 28 | A in octave 5 Quarter Note
	{ NOTE_B5, 143 }, // Bar 29 | B in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 29 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 29 | F in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 29 | F in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 29 | E in octave 6 Eighth Note
	{ NOTE_D6, 143 }, // Bar 29 | D in octave 6 16th Note
	{ NOTE_C6, 1142 }, // Bar 29 | C in octave 6 Half Note
	{ NOTE_C6, 143 }, // Bar 30 | C in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 30 | C in octave 6 Eighth Note
	{ NOTE_C6, 286 }, // Bar 30 | C in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 30 | C in octave 6 16th Note
	{ NOTE_D6, 286 }, // Bar 30 | D in octave 6 Eighth Note
	{ NOTE_E6, 143 }, // Bar 30 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 30 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 30 | A in octave 5 16th Note
	{ NOTE_G5, 570 }, // Bar 30 | G in octave 5 Quarter Note
	{ NOTE_C6, 143 }, // Bar 31 | C in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 31 | C in octave 6 Eighth Note
	{ NOTE_C6, 286 }, // Bar 31 | C in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 31 | C in octave 6 16th Note
	{ NOTE_D6, 143 }, // Bar 31 | D in octave 6 16th Note
	{ NOTE_E6, 143 }, // Bar 31 | E in octave 6 16th Note
	{ NOTE_REST, 1142 }, // Bar 31 | Half Rest
	{ NOTE_C6, 143 }, // Bar 32 | C in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 32 | C in octave 6 Eighth Note
	{ NOTE_C6, 286 }, // Bar 32 | C in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 32 | C in octave 6 16th Note
	{ NOTE_D6, 286 }, // Bar 32 | D in octave 6 Eighth Note
	{ NOTE_E6, 143 }, // Bar 32 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 32 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 32 | A in octave 5 16th Note
	{ NOTE_G5, 570 }, // Bar 32 | G in octave 5 Quarter Note
	{ NOTE_E6, 143 }, // Bar 33 | E in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 33 | E in octave 6 Eighth Note
	{ NOTE_E6, 286 }, // Bar 33 | E in octave 6 Eighth Note
	{ NOTE_C6, 143 }, // Bar 33 | C in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 33 | E in octave 6 Eighth Note
	{ NOTE_G6, 1142 }, // Bar 33 | G in octave 6 Half Note
	{ NOTE_E6, 143 }, // Bar 34 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 34 | C in octave 6 Eighth Note
	{ NOTE_G5, 429 }, // Bar 34 | G in octave 5 Dotted Eighth Note
	{ NOTE_GS5, 286 }, // Bar 34 | G-sharp in octave 5 Eighth Note
	{ NOTE_A5, 143 }, // Bar 34 | A in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 34 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 34 | F in octave 6 16th Note
	{ NOTE_A5, 570 }, // Bar 34 | A in octave 5 Quarter Note
	{ NOTE_B5, 143 }, // Bar 35 | B in octave 5 16th Note
	{ NOTE_A6, 286 }, // Bar 35 | A in octave 6 Eighth Note
	{ NOTE_A6, 143 }, // Bar 35 | A in octave 6 16th Note
	{ NOTE_A6, 143 }, // Bar 35 | A in octave 6 16th Note
	{ NOTE_G6, 286 }, // Bar 35 | G in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 35 | F in octave 6 16th Note
	{ NOTE_E6, 143 }, // Bar 35 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 35 | C in octave 6 Eighth Note
	{ NOTE_A5, 143 }, // Bar 35 | A in octave 5 16th Note
	{ NOTE_G5, 570 }, // Bar 35 | G in octave 5 Quarter Note
	{ NOTE_E6, 143 }, // Bar 36 | E in octave 6 16th Note
	{ NOTE_C6, 286 }, // Bar 36 | C in octave 6 Eighth Note
	{ NOTE_G5, 429 }, // Bar 36 | G in octave 5 Dotted Eighth Note
	{ NOTE_GS5, 286 }, // Bar 36 | G-sharp in octave 5 Eighth Note
	{ NOTE_A5, 143 }, // Bar 36 | A in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 36 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 36 | F in octave 6 16th Note
	{ NOTE_A5, 570 }, // Bar 36 | A in octave 5 Quarter Note
	{ NOTE_B5, 143 }, // Bar 37 | B in octave 5 16th Note
	{ NOTE_F6, 286 }, // Bar 37 | F in octave 6 Eighth Note
	{ NOTE_F6, 143 }, // Bar 37 | F in octave 6 16th Note
	{ NOTE_F6, 143 }, // Bar 37 | F in octave 6 16th Note
	{ NOTE_E6, 286 }, // Bar 37 | E in octave 6 Eighth Note
	{ NOTE_D6, 143 }, // Bar 37 | D in octave 6 16th Note
	{ NOTE_C6, 1142 }, // Bar 37 | C in octave 6 Half Note
};
const uint16_t NUM_OF_NOTES0 = sizeof(melody0)/sizeof(melody0[0]);
