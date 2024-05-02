/*
Diseñar un agoritmo que pida nombre de usuario y despliegue en
pantalla el nombre entre asteriscos. La cantidad de asteriscos 
debe ser la misma que caracteres en el nombre incluido espacios 
*/

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

// Prototipos
void pedirNombre(string &);
void asteriscos(string &);

// Función principal
int main(){
    string nombre;

    pedirNombre(nombre);

    asteriscos(nombre);

    getch();
    return 0;
}

// Procedimiento pedirNombre
void pedirNombre(string &nombre){
    cout<<"Ingresa un nombre: "<<endl;
    getline(cin, nombre);
}

// Procedimiento asteriscos
void asteriscos(string &nombre){
    for(int i=0; i<=nombre.length(); i++){
        cout<<"*";
    }
    
    cout<<endl;
    cout<<nombre<<endl;

    for(int i=0; i<=nombre.length(); i++){
        cout<<"*";
    }
}


