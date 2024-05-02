/*
Hacer un algoritmo que llene una matriz de 4x4 y que almacene la diagonal
principal en un arreglo. Imprimir el arreglo resultante
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    // Variables
    int arreglo[4][4], diagonal[4];

    // Ingresar datos al arreglo
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"Ingresa un elemento: ";
            cin>>arreglo[i][j];
        }
    }

    // Encontrar la diagonal yt almanecarla en arreglo
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==j){
                diagonal[i] = arreglo[i][j];
            }
        }
    }

    // Impresion de prueba arreglo
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arreglo[i][j]<<", ";
        }
        cout<<endl;
    }

    // Imprimir el arreglo con la diagonal
    cout<<"La diagonal resultante es: "<<endl;
    for(int i=0; i<4; i++){
        cout<<diagonal[i]<<", ";
    }

    getch();
    return 0;
}