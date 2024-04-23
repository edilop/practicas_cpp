/*
Hacer un algoritmo que almacene números en una matriz de 3*4.
Imprimir la suma de los números pares almacenados en la matriz
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    // Variables
    int arreglo[3][4], suma;

    // Ingresamos los elementos
    for(int i=0; i<=2; i++){
        for(int j=0; j<=3; j++){
            cout<<"Ingresa un numero entero: ";
            cin>>arreglo[i][j];
        }
    }
    
    //Calculamos la suma de los números pares
    for(int i=0; i<=2; i++){
        for(int j=0; j<=3; j++){
            if(arreglo[i][j]%2 == 0){
                suma += arreglo[i][j];
            }
        }
    }
    cout<<"La suma de los pares es: "<<suma<<endl;

    //Imprimimos el arreglo
    for(int i=0; i<3; i++){ //Para las filas
        for(int j=0; j<3; j++){ //Para las columna
            cout<<"["<<arreglo[i][j]<<"], ";
        }
        cout<<endl;
    }
    getch();
    return 0;
}