// Sentencia do while

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int conteo=0,numero;

do
{
    cout<<"\nDigite un numero: ";
    cin>>numero;
    if (numero!=0){
        conteo++;
    }
} while (numero!=0);

cout<<"\nEl total de numeros ingresados: "<<conteo<<endl;
getch();
return 0;
}