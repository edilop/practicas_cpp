/*
Calcular el factorial de un numero mayor o igual a 0
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    // variables
    int numero, factorial=1;
    // Pedimos que ingrese un número, no pasará al cálculo del factorial
    // hasta que ingresemos un número mayor a 0
    do
    {
        cout<<"Ingresa un numero: ";
        cin>>numero;
    } while (numero<0);
    
    // Calculamos el factorial
    for (int i=1; i<=numero; i++){
        factorial *= i;
    }
    
    // Imprimimos el resultado
    cout<<"El factorial de "<<numero<<" es "<<factorial<<endl;
    getch();
    return 0;
}