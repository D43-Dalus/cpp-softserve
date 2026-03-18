/*
    Volume manager.
    Same as 2.3 tarea_volumen file, but with class approach.
*/
#include <iostream>
#include <cstring>

using namespace std;

class AudioPlayer {
    private:
        int volume = 10;
        char* deviceName;
    public:
        //default constructor
        AudioPlayer(int vol, const char* devName) {
            volume = vol;
            //reserve memory to copy the name of our device
            //first we've got to calculate the size of the allocated memory
            deviceName = new char[strlen(devName) + 1];
            //strcpy: pastes onto DEST string the content of SRC string
            strcpy(deviceName, devName);
        }

        //copy constructor. we take the already defined constructor
        //we copy the volume member specifically
        AudioPlayer(const AudioPlayer &copy) : volume(copy.volume) {
            //reserve memory for the new name
            deviceName = new char[strlen(copy.deviceName) + 1];
            //copy the string content. again: DEST, SRC.
            strcpy(deviceName, copy.deviceName);
        }

        //pointer destructor, as we're working with raw pointers
        ~AudioPlayer() {
            delete[] deviceName;
        }

        //previous functions, now as methods of the AudioPlayer class
        void printVolume(){
            cout << "The current volume is " << volume << endl; 
        }

        bool setVolume(int newVolume){
             if (newVolume >= 0 && newVolume <=100) {
                volume = newVolume;
                cout << "Success. The new volume is " << volume << endl;
                return true;
            } else {
                cout << "Invalid volume value. Try again." << endl;
                return false;
            }
        }

        void mute() {
            volume = 0;
            cout << "The volume has been muted." << endl;
        }
        void maxVolume() {
            volume = 100;
            cout << "The maximum volume (100) has been set." << endl;
        }
};

int main() {
    int selection;
    int newVolume;

    AudioPlayer parlanteNuevo = AudioPlayer(10, "Bluetooth Speaker");
    AudioPlayer parlanteMasNuevo = parlanteNuevo;

    do{
    cout << "\nWelcome. What do you want to do? Write the number of your selection\n\n"
    << "[1] Print the current Volume\n[2] Set a new volume\n[3] Mute\n[4] Set maximum volume.\n[0] Exit" << endl;
    cin >> selection;
    switch (selection) {
        case 1:
            parlanteNuevo.printVolume();
            cout << "\n---------------" << endl;
            selection = 0;
            break;
        case 2:
            cout << "Please set a new volume (between 0 and 100):" << endl;
            cin >> newVolume;
            parlanteNuevo.setVolume(newVolume);
            cout << "\n---------------" << endl;
            selection = 0;
            break;
        case 3:
            parlanteNuevo.mute();
            cout << "\n---------------" << endl;
            selection = 0;
            break;
        case 4:
            parlanteNuevo.maxVolume();
            cout << "\n---------------" << endl;
            selection = 0;
            break;
        case 0:
            cout << "Bye bye!\n\n---------------" << endl;
            exit(0);
            break;
        default:
            cout << "Invalid option. Try again!" << endl;
            break;
    }} while (selection != (1 || 2 || 3 || 4 || 0));    
}