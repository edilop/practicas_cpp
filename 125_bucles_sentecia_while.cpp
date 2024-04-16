// Sentencia while

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int conteo=0,numero;

    cout<<"\ndigite un numero: ";
    cin>>numero;

    while(numero!=0){
        conteo++;
        cout<<"\ndigite un numero: "; 
        cin>>numero;
    }

    cout<<"\nEl total de numeros introducidos es de:"<<conteo<<endl;
    getch();
    return 0;
}