/*
Crea un array unidimensional con N números, lee los elementos
por teclado, guadalos en el arreglo, calcula cuál es el número
mayor de todos, y cuál es el menor.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    // Variables
    int num_mayor, num_menor, tam_array;

    // Capturar el tamaño del arreglo
    cout<<"De que tamanio deseas el arreglo: ";
    cin>>tam_array;
    cout<<"El arreglo es de: "<<tam_array<<" espacios."<<endl;

    // Crear el arreglo
    int arreglo[tam_array];

    // Introducir los elementos del arreglo
    for(int i=0; i<tam_array; i++){
        cout<<"Ingresa un numero: ";
        cin>>arreglo[i];
    }

    // Calcular número mayor
    num_mayor = arreglo[0];
    for (int i = 0; i < tam_array; i++){
        if (num_mayor <= arreglo[i]){
            num_mayor = arreglo[i];
        }
    }

    // Calcular número menor
    num_menor = arreglo[0];
    for (int i = 0; i < tam_array; i++){
        if (num_menor >= arreglo[i]){
            num_menor = arreglo[i];
        }
    }

    // Imprimimos el resultado
    cout<<"Numero mayor: "<<num_mayor;
    cout<<"\nNumero menor: "<<num_menor;

    getch();
    return 0;
}