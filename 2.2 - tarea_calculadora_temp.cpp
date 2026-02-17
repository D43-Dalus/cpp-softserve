/*
    Calculadora de conversión de temperaturas por casting explícito.
    Desde/hacia Kelvin, Fahrenheit o Celsius.
    Input: Unidad de medida de entrada, valor y unidad de medida deseada
*/

#include <iostream>
#include <math.h>

using namespace std;

void convertirTemperatura(char inputTemp, double inputValue, char outputTemp){
    double outputValue;

    if (inputTemp == 'F' || inputTemp == 'f') {
           if (outputTemp == 'C' || outputTemp == 'c') {
                outputValue = static_cast<int>(round(5 * (inputValue-32) / 9));
                cout << inputValue << "°F equals " << outputValue << "°C" << endl;
           }
           if (outputTemp == 'K' || outputTemp == 'k') {
                outputValue = static_cast<int>(round((5 * (inputValue-32) / 9) + 273));
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
                outputValue = static_cast<int>(round(inputValue + 273));
                cout << inputValue << "°C equals " << outputValue << "°K" << endl;
           }
           if (outputTemp == 'C' || outputTemp == 'c') {
               cout << "Are you sure you want to convert C to C?" << endl;
           }
    }
    if (inputTemp == 'K' || inputTemp == 'k') {
           if (outputTemp == 'F' || outputTemp == 'f') {
                outputValue = static_cast<int>(round(9 * (inputValue - 273) / 5));
                cout << inputValue << "°K equals " << outputValue << "°F" << endl;
           }
           if (outputTemp == 'C' || outputTemp == 'c'){
                outputValue = static_cast<int>(round(inputValue - 273));
                cout << inputValue << "°K equals " << outputValue << "°C" << endl;
           }
           if (outputTemp == 'K' || outputTemp == 'k') {
                 cout << "Are you sure you want to convert K to K?" << endl;
           }
    } else {
        exit(0);
    }
}

int main() {
    char inputTemp;
    double inputValue;
    char outputTemp;

    cout << "Welcome to the temperature calculator. First select the temperature measure you want to convert.\n" << endl;
    cout << "\nWrite the letter according your choice. Ex: K\n[K]: Kelvin \n[F]: Fahrenheit \n[C]: Celsius" << endl;
    cin >> inputTemp;
    cout << "\nWrite the value (number) of the temperature you want to convert. Ex: 30." << endl;
    cin >> inputValue;
    cout << "\nNow you have to select the desired temperature measure. Write its letter. Ex: K\n[K]: Kelvin \n[F]: Fahrenheit \n[C]: Celsius" << endl;
    cin >> outputTemp;
    convertirTemperatura(inputTemp, inputValue, outputTemp);
}