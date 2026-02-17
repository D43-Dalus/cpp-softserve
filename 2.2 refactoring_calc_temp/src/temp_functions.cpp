#include <iostream>
#include <math.h>
#include "functions.h"
#include "constants.h"

using namespace std;

void convertirTemperatura(char inputTemp, double inputValue, char outputTemp){
    double outputValue;

    if (inputTemp == 'F' || inputTemp == 'f') {
           if (outputTemp == 'C' || outputTemp == 'c') {
                outputValue = static_cast<int>(round(5 * (inputValue-32) / 9));
                cout << inputValue << "°F equals " << outputValue << "°C" << endl;
           }
           if (outputTemp == 'K' || outputTemp == 'k') {
                outputValue = static_cast<int>(round((5 * (inputValue-32) / 9) + zero_celsius_in_kelvin));
                cout << inputValue << "°F equals " << outputValue << "°K" << endl;
           }
           if (outputTemp == 'F' || outputTemp == 'f') {
                 cout << "Are you sure you want to convert F to F?" << endl;
           }
        }
    if (inputTemp == 'C' || inputTemp == 'c') {
           if (outputTemp == 'F' || outputTemp == 'f') {
                outputValue = static_cast<int>(round((9 * inputValue / 5) + 32));
                cout << inputValue << "°C equals " << outputValue << "°F" << endl;
           }
           if (outputTemp == 'K' || outputTemp == 'k') {
                outputValue = static_cast<int>(round(inputValue + zero_celsius_in_kelvin));
                cout << inputValue << "°C equals " << outputValue << "°K" << endl;
           }
           if (outputTemp == 'C' || outputTemp == 'c') {
               cout << "Are you sure you want to convert C to C?" << endl;
           }
    }
    if (inputTemp == 'K' || inputTemp == 'k') {
           if (outputTemp == 'F' || outputTemp == 'f') {
                outputValue = static_cast<int>(round(9 * (inputValue - zero_celsius_in_kelvin) / 5));
                cout << inputValue << "°K equals " << outputValue << "°F" << endl;
           }
           if (outputTemp == 'C' || outputTemp == 'c'){
                outputValue = static_cast<int>(round(inputValue - zero_celsius_in_kelvin));
                cout << inputValue << "°K equals " << outputValue << "°C" << endl;
           }
           if (outputTemp == 'K' || outputTemp == 'k') {
                 cout << "Are you sure you want to convert K to K?" << endl;
           }
    } else {
        exit(0);
    }
}
