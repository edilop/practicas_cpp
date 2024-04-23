/*
MATRICES
Es un arreglo  de M*N elemento, organizados en 2 dimensiones donde
M son las filas y N son las columnas
*/

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
    // Declaramos un arreglo de 3x3
    int numeros[3][3];

    // Ingresamos elementos en el arreglo
    for(int i=0; i<=2; i++){ //Para las filas
        for(int j=0; j<=2; j++){ //Para las columnas
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    // Imprimimos el arreglo
    for(int i=0; i<3; i++){ //Para las filas
        for(int j=0; j<3; j++){ //Para las columna
            cout<<"["<<numeros[i][j]<<"], ";
            }
        cout<<endl;
    }

    getch();
    return 0;
}