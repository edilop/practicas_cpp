/*
Hacer un algoritmo que llene una matriz 4x4. Calcular la suma de 
cada fila y almacenarla en un arreglo, la suma de cada columna 
y almacenarla en otro arreglo
*/


#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    // variables
    int arreglo[4][4];
    int filas[4], sum_fila, posfila=0;
    int cols[4], sum_cols, poscols=0;

    // Ingresar datos al arreglo
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            cout<<"Ingresa un elemento: ";
            cin>>arreglo[i][j];
        }
    }

    // Suma de filas
    for(int i=0; i<=3; i++){
        sum_fila=0;
        for(int j=0; j<=3; j++){ 
           sum_fila += arreglo[i][j];
            }
        filas[posfila] = sum_fila;
        posfila++;
        }

    // Suma de columnas
    for(int j=0; j<=3; j++){
        sum_cols=0;
        for(int i=0; i<=3; i++){
            sum_cols += arreglo[i][j];
        }
        cols[poscols] = sum_cols;
        poscols++;
    }

    // Impresion de prueba arreglo
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            cout<<arreglo[i][j]<<", ";
        }
        cout<<endl;
    }

    // Impresión arreglo de suma de filas
    cout<<"Resultados de suma por filas: "<<endl;
    for(int i=0; i<=3; i++){
        cout<<filas[i]<<", ";
    }
    cout<<endl;
    // Impresion arreglo de suma columnas
    cout<<"Resultados de suma por columnas: "<<endl;
    for(int i=0; i<=3; i++){
        cout<<cols[i]<<", ";
    }

    getch();
    return 0;

}