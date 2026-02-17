#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "constants.h"

void printVolume(Volume currentVolume);
bool setVolume(Volume &currentVolume, Volume newVolume);
void mute(Volume &currentVolume);
void maxVolume(Volume &currentVolume);

#endif // FUNCTIONS_H 