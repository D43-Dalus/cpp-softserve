/*
    Calcular salario de un trabajador segun costo por hora y horas trabajadas
    Se calcula salario mensual asumiendo 4 semanas trabajadas por mes.
*/

#include <iostream>
using namespace std;

int calcularSalario (int costoPorHora, int horasTrabajadas) {
    return costoPorHora * horasTrabajadas * 4;
}

int main(){
    int costoPorHora;
    int horasTrabajadas;
    cout << "Para calcular el salario del trabajador, primero ingrese el costo por hora:" << endl;
    cin >> costoPorHora;
    cout << "Ahora ingrese las horas trabajadas por semana:" << endl;
    cin >> horasTrabajadas;
    int salario = calcularSalario(costoPorHora, horasTrabajadas);
    cout << "El salario mensual del trabajador es de $" << salario << endl;
}

