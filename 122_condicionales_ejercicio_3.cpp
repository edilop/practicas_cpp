/*
Leer 3 números e imprimir el mayor de los 3
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    // Variables
    int num_1, num_2, num_3;

    // Capturamos los valores
    cout<<"Ingresa los 3 valores enteros: ";
    cin>>num_1>>num_2>>num_3;

    // Encontramos el mayor valor
    if(num_1>=num_2 && num_1>=num_3){
        cout<<"El numero mayor es: "<<num_1<<endl;
    }
    else if(num_2>=num_1 && num_2>=num_3){
        cout<<"El número mayor es: "<<num_2<<endl;
    }

    else {
        cout<<"El numero mayor es: "<<num_3<<endl;
    }

    getch();
    return 0;
}
