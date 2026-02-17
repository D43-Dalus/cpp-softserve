/*
    Calculadora de conversión de temperaturas por casting explícito.
    Desde/hacia Kelvin, Fahrenheit o Celsius.
    Input: Unidad de medida de entrada, valor y unidad de medida deseada
*/

#include <iostream>
#include <math.h>
#include "functions.h"
#include "constants.h"

using namespace std;


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