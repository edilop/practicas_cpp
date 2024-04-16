/*
Ingresar un número entero y reportar si es par o impar
*/

#include<iostream>


using namespace std;

int main(){
    // Variables
    int numero;
    // Capturamos el número
    cout<<"Ingresa un numero entero: ";
    cin>>numero;
    // Comprobamos si es par o impar
    if (numero%2==0){ //Si es numero par
        cout<<numero<<" Es un numero par"<<endl;
    }
    else
    { //Si es impar
        cout<<numero<<" Es un numero impar"<<endl;

    }
    return 0;
};