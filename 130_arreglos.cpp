/*
Arreglo->Estructura de datos que almacena bajo el mismo nombre (variable)
una colección de datos del mismo tipo
*/
// LOS ARREGLOS SE CARACTERIZAN POR:
// - Almacenan datos en posiciones contiguas de memoria
// - Tiene el mismo nombre de variable, pero se localizan mediante un índice [posición]

// PARA REPRESENTAAR UN ARREGLO:
// -Indicar nombre del arreglo y que valores podrá almacenar
// -Indicar las dimensiones que tendrá el arreglo
// Ejs:
// int numeros[5], char vocales[5], float num[3]

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[5];

    // LLenado manual del arreglo
    numeros[0] = 3;
    numeros[1] = 6;
    numeros[2] = 10;
    numeros[3] = 16;
    numeros[4] = 11;

    // Mostrar los elementos del arreglo de forma manual
    cout<<numeros[2]<<endl;

    // Mostras los elementos del arreglo con bucle
    for (int i = 0; i < 5; i++){
        cout<<numeros[i]<<endl;
    }

    getch();
    return 0;
}