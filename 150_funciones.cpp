/*
FUNCIONES
Es un subprograma o subalgoritmo que toma uno o más valores(argumentos)
y devuelve un resultado (valor de la función para argumentos dados)
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Prototipo de la función
int sumar(int, int);


int main(){
    int num1, num2;

    cout<<"digite 2 numeros: ";
    cin>>num1>>num2;

    cout<<sumar(num1, num2)<<endl;

    getch();
    return 0;
}

// Definición de la función suma
int sumar(int num1, int num2){
    int suma;
    suma = num1 + num2;
return suma;
}