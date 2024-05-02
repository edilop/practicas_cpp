/*
PROCEDIMIENTOS
Es un subprograma que ejecuta una tarea, pero tras ejecutar esa tarea
no tiene nungún valor nungún valor asociado al nombre del prodcedimiento,
com oen el caso de las funciones.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Prototipo del procedimiento
void calcularMitad(float);

int main(){
    float numero;

    cout<<"Ingresa un número: ";
    cin>>numero;

    calcularMitad(numero);

    getch();
    return 0;
}

// DEclaramos el procedimiento
void calcularMitad(float num){
    float mitad;
    mitad = num/2;
    cout<<"La mitad de "<<num<<" es "<<mitad<<endl;
}