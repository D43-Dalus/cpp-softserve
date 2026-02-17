/*
    Volume manager.
    int between 0 y 100, defined on the global scope.

    // Print the current volume
    >> void printVolume(int volume);

    // Try to change the volume to newVolume.
     - If newVolume is between 0 and 100 (inclusive), update the volume variable and return true.
     - Otherwise, do NOT change volume and return false.
    >> bool setVolume(int& volume, int newVolume);

    // Inside main:
    - Print the initial volume
    - Ask the user to set a new volume (calling setVolume)
    - If the update is successful, print message to user
    - If the update fails, print an error message.

    // Optional:
    - Implement function to show info on screen
    >> void printVolume(int volume);

    - Implement "mute" and "maxVolume" functions
    >> void mute( ..... ) // sets volume at 0 level
    >> void maxVolume( .... ) // sets volume at max level (100)
*/

#include <iostream>
using namespace std;

typedef int Volume;
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

int main() {
    int selection;
    Volume newVolume;
    do{
    cout << "\nWelcome. What do you want to do? Write the number of your selection\n\n"
    << "[1] Print the current Volume\n[2] Set a new volume\n[3] Mute\n[4] Set maximum volume.\n[0] Exit" << endl;
    cin >> selection;
    switch (selection) {
        case 1:
            printVolume(currentVolume);
            cout << "\n---------------" << endl;
            selection = 0;
            break;
        case 2:
            cout << "Please set a new volume (between 0 and 100):" << endl;
            cin >> newVolume;
            setVolume(currentVolume, newVolume);
            cout << "\n---------------" << endl;
            selection = 0;
            break;
        case 3:
            mute(currentVolume);
            cout << "\n---------------" << endl;
            selection = 0;
            break;
        case 4:
            maxVolume(currentVolume);
            cout << "\n---------------" << endl;
            selection = 0;
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "Invalid option. Try again!" << endl;
            break;
    }} while (selection != (1 || 2 || 3 || 4 || 0));    
}