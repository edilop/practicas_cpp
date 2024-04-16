/*
Crea un arreglo unidimensional con N caracteres,
lee los elementos por teclado, guardalos en el arreglo
y muéstralos en el orden inverso al introducido
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    //Variables
    int tam_array;

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

    // Imprimir el arreglo
    for (int i = tam_array-1; i >= 0; i--){
        cout<<arreglo[i]<<" ";
    }
    

    getch();
    return 0;
}