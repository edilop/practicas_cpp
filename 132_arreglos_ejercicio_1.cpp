/*
Crear un arreglo unidimensional donde el usuario indique el tamaño por 
teclado, lluego llenar el arreglo con números aleatorios entre 1 - 100,
y mostrar los elementos del arreglo
*/

#include<iostream>
#include<conio.h>
#include<cstdlib> //Contiene funciones para generar num aleatorios
#include<ctime> //Contiene funciones para generar num aleatorios

using namespace std;

int main(){
    // Variables
    int tam;

    // Ingresamos tamaño del arreglo
    cout<<"Digite el tamanio del arreglo: ";
    cin>>tam;

    int arreglo[tam];

    // Rellenar arreglo
    srand(time(NULL)); //Encabezado para crear aleatorios
    for (int i=0; i<tam; i++){
        arreglo[i] = 1+rand()%(100);
    }

    //Mostrar arreglo
    for (int i=0; i<tam; i++){
        cout<<"Arreglo["<<i<<"] = "<<arreglo[i]<<endl;
    }

    getch();
    return 0;
}