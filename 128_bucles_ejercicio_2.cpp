/*
Ingresar un número y mostrar la suma de cada una de sus cifras
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    // variables
    int numero, suma=0, digito;
    // Capturamos el numero
    cout<<"\nIngresa un numero: ";
    cin>>numero;
    //Separamos el numero con bucles
    while (numero!=0)
    {
        digito = numero % 10;
        numero /= 10;
        suma += digito;
    }
    if (suma < 0)
    {
        suma *= -1;
    }
    
    // Devolvemos el resultado
    cout<<"La suma de los digitos es: "<<suma<<endl;

    getch();
    return 0;
}