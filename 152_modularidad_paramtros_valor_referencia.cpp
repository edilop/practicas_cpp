// Parametos por valor y referencia

#include<iostream>
#include<conio.h>
using namespace std;

// Prototipos
int aumentar(int); // Parametro por valor
void pedirDato(int &); //parametro por referencia


int main(){
    int numero;
    
    pedirDato(numero);

    cout<<"El aumento es: "<<aumentar(numero)<<endl;

    getch();
    return 0;
}

// Procedimiento pedirDato
void pedirDato(int &num){
    cout<<"Ingresa un numero: ";
    cin>>num;
}

// Función de aumentar el número
int aumentar(int num){
    int aumento;
    aumento = num + 10;
    return aumento;
}