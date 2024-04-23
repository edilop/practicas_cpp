/*
Diseña un programa que permita ingresar una cadena de caracteres y detecte
cuantas vocales tiene
*/

#include<iostream>
#include<conio.h>
#include<string>


using namespace std;

int main(){
    // Variables
    string cadena;
    int contadorVolcales = 0;

    cout<<"Digite su cadena: ";
    getline(cin, cadena);

    // Recorrer la cadena
    for(int i=0; i<cadena.length(); i++){
        switch (cadena[i])
        {
        case 'a': contadorVolcales++;break;
        case 'e': contadorVolcales++;break;
        case 'i': contadorVolcales++;break;
        case 'o': contadorVolcales++;break;
        case 'u': contadorVolcales++;break;
        default:
            break;
        }
    }

    cout<<"El numero de vocales es: "<<contadorVolcales<<endl;
    getch();
    return 0;
}