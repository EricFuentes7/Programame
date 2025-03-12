/*
Ejercicio 1: Manipulación de Arrays

    Declara un array de 10 enteros e inicialízalo con los valores del 1 al 10.
    Escribe un programa que recorra el array e imprima los números en orden inverso.
    Modifica el tercer elemento del array para que valga 100 y vuelve a imprimir todos los elementos.
*/
#include <iostream>
using namespace std;

int main(){
    int casosValores = 10;
    int valores[casosValores]={1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < casosValores; i++){
        cout << valores[i] << ", ";
    }
    cout << endl;
    for (int i = casosValores - 1; i >= 0; i--) {
        cout << valores[i] << ", ";
    }
    cout << endl;
    valores[2] = 100;
    for (int i = 0; i < casosValores; i++){
        cout << valores[i] << ", ";
    }
    return 0;
}