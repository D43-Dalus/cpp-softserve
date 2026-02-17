
#include <iostream>
#include "../include/constants.h"
#include "../include/functions.h" 

using namespace std;

Volume currentVolume = 10; 

void printVolume(Volume currentVolume){
    cout << "The current volume is " << currentVolume << endl; 
}

bool setVolume(Volume &currentVolume, Volume newVolume){
    if (newVolume >= 0 && newVolume <=100) {
        currentVolume = newVolume;
        cout << "Success. The new volume is " << currentVolume << endl;
        return true;
    } else {
        cout << "Invalid volume value. Try again." << endl;
        return false;
    }
}

void mute(Volume &currentVolume) {
    currentVolume = 0;
    cout << "The volume has been muted." << endl;
}

void maxVolume(Volume &currentVolume) {
    currentVolume = 100;
    cout << "The maximum volume (100) has been set." << endl;
}
