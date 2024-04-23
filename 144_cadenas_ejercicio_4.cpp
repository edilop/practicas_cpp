/*
Diseñar un algoritmo que tomando como entrada una cadena de texto
nos devuelva si es o no un palíndromo.
*/

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
    // Variables
    string cadena, cadena_sin_esp, cadena_al_revez;
    // bool es_palindromo = false;

    // Capturar la cadena
    cout<<"Ingresa una cadena: ";
    getline(cin, cadena);

    // cadena = tolower(cadena); //Cambiar cadena a minusculas

    // Eliminar espacios 
    for(int i=0; i<cadena.length(); i++){
        if(cadena[i] != ' '){
            cadena_sin_esp += cadena[i];
        }
    }

    // Crear cadena al revez
    for(int i=cadena_sin_esp.length()-1; i>=0; i--){
        cadena_al_revez += cadena_sin_esp[i];
    }

    // Verificar palindromo
    if(cadena_sin_esp == cadena_al_revez){
        cout<<"Es un palindromo"<<endl;
    } else{
        cout<<"No es un palindromo"<<endl;
    }

    // IMpresión de control
    cout<<cadena_sin_esp<<endl;
    cout<<cadena_al_revez<<endl;


    getch();
    return 0;
}