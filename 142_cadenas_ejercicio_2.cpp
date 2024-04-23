/*
Calcular la longitud de 2 cadenas de caracteres y mostras la cadena 
con mayor longitud
*/

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
    // Variables
    string cadenas[2];

    // Capturamos las cadenas
    for(int i=0; i<2; i++){
        cout<<"Ingresa una cadena: ";
        getline(cin, cadenas[i]);
    }

    // Contar el largo de la cadena
    if(cadenas[0].length() > cadenas[1].length()){
        cout<<cadenas[0]<<endl;
    } else if(cadenas[0].length() < cadenas[1].length()){
        cout<<cadenas[1]<<endl;
    } else{
        cout<<"las frases tiene igual longitud";
    }

    getch();
    return 0;
}