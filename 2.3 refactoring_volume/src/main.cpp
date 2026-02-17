#include <iostream>
#include "../include/functions.h"
#include "../include/constants.h"

using namespace std;

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