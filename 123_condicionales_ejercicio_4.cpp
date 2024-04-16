/*
Elabora un programa que me muestre los días de la semana
cuando ingrese los 7 primeros números
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    // Variables
    int numero_dia;

    // Capturamos el dígito para el determinar el día
    cout<<"\nIngresa un numero del 1 al 7:";
    cin>>numero_dia;

    // Determinamos a que día corresponde el número
    // 1->lunes, 2->martes, 3->miercoles, 4->jueves, 5->viernes, 6->sabado, 7->domingo
    switch (numero_dia)
    {
    case 1:
        cout<<"Lunes"<<endl; break;
    case 2:
        cout<<"Martes"<<endl; break;
    case 3:
        cout<<"Miercoles"<<endl; break;
    case 4:
        cout<<"Jueves"<<endl; break;
    case 5:
        cout<<"Viernes"<<endl; break;
    case 6:
        cout<<"Sabado"<<endl; break;
    case 7:
        cout<<"Domingo"<<endl; break;
    default:
        cout<<"No existe día para ese número"<<endl;
        break;
    }
    getch();
    return 0;
}