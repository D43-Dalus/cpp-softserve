#include <iostream>
using namespace std;

void permutarPorReferencia(int &primerNumero, int &segundoNumero) {
    int holderPrimerNumero = primerNumero;
    primerNumero = segundoNumero;
    segundoNumero = holderPrimerNumero;
}

void permutarPorPuntero(int *primerNumero, int *segundoNumero) {
    int holderPrimerNumero = *primerNumero;
    *primerNumero = *segundoNumero;
    *segundoNumero = holderPrimerNumero;
}

int main() {
    int numero1PermutadoPuntero = 5;
    int numero2PermutadoPuntero = 7;

    cout << numero1PermutadoPuntero << ", " << numero2PermutadoPuntero << endl;
    permutarPorPuntero(&numero1PermutadoPuntero, &numero2PermutadoPuntero);
    cout << numero1PermutadoPuntero << ", " << numero2PermutadoPuntero << endl;


    int numero1PermutadoReferencia = 8;
    int numero2PermutadoReferencia = 15;
    cout << numero1PermutadoReferencia << ", " << numero2PermutadoReferencia << endl;
    permutarPorReferencia(numero1PermutadoReferencia, numero2PermutadoReferencia);
    cout << numero1PermutadoReferencia << ", " << numero2PermutadoReferencia << endl;

}