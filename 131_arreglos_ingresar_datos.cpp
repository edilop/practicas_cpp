/*
Crear un arreglo pidiendo los datos al usuario
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    // Creamos un arreglo con 5 elementos números enteros
    int arreglo[5];

    // Llenamos el arreglo
    for(int i=0; i<5; i++){
        cout<<"Ingrese un número: ";
        cin>>arreglo[i];
    }

    // Mostramos los elementos del arreglo
    for (int i=0; i<5; i++){
        cout<<arreglo[i]<<endl;
    }
    getch();
    return 0;
}