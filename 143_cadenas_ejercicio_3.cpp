/*
Diseñe un algoritmo que elimine los espacios en blanco de un texto
*/

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
    // Variables
    string cadena, cadena_sin_esp;

    // Capturar cadena
    cout<<"Ingresa una cadena: ";
    getline(cin, cadena);

    // Recorrer la cadena, eliminar espacio y almacenar resultado en cadena_sin_esp
    for(int i=0; i<cadena.length(); i++){
        if(cadena[i] != ' '){
            cadena_sin_esp += cadena[i];
        }
    }

    // Imprimir cadena sin espacios
    cout<<cadena_sin_esp<<endl;

    getch();
    return 0;
}
