#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <Arduino.h>



// Creat a set of new characters
const uint8_t charBitmap[][8] = {{0xc, 0x12, 0x12, 0xc, 0, 0, 0, 0},
                                 {0x6, 0x9, 0x9, 0x6, 0, 0, 0, 0},
                                 {0x0, 0x6, 0x9, 0x9, 0x6, 0, 0, 0x0},
                                 {0x0, 0xc, 0x12, 0x12, 0xc, 0, 0, 0x0},
                                 {0x0, 0x0, 0xc, 0x12, 0x12, 0xc, 0, 0x0},
                                 {0x0, 0x0, 0x6, 0x9, 0x9, 0x6, 0, 0x0},
                                 {0x0, 0x0, 0x0, 0x6, 0x9, 0x9, 0x6, 0x0},
                                 {0x0, 0x0, 0x0, 0xc, 0x12, 0x12, 0xc, 0x0}

};

// Creat a set of new characters
byte smiley[8] = {0b00000, 0b00000, 0b01010, 0b00000,
                  0b00000, 0b10001, 0b01110, 0b00000};

byte armsUp[8] = {0b00100, 0b01010, 0b00100, 0b10101,
                  0b01110, 0b00100, 0b00100, 0b01010};

byte frownie[8] = {0b00000, 0b00000, 0b01010, 0b00000,
                   0b00000, 0b00000, 0b01110, 0b10001};

#endif