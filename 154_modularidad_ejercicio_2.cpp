/*
Diseñe un algoritmo que muestre un menú al usuario con las siguientes
opciones: potenciación, raíz cuadrada y terminar, que cada opción
la realice una funcion o procedimiento
*/

#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstdlib> //Conteiene función para limpiar la pantalla
using namespace std;

// Prototipos
void menu();
int potenciacion(int, int);
int raizCuadrada(int);

// Función principal
int main(){
    
    menu();

    getch();
    return 0;
}

// Procedimiento menu
void menu(){
    int opcion;
    int num, exp;

    do
    {
        // Desplegamos el menú
        cout<<"\n\t:MENU:"<<endl;
        cout<<"1: Potenciacion"<<endl;
        cout<<"2: Raiz cuadrada"<<endl;
        cout<<"3: Terminar"<<endl;
        cin>>opcion;

        // Ejecutamos la función elegida por el usr
        switch (opcion){
            case 1: 
                cout<<"Digite el numero base: ";
                cin>>num;
                cout<<"Digite el exponente: ";
                cin>>exp;
                cout<<"\nEl resultado es: "<<potenciacion(num, exp)<<endl;
            break;

            case 2:
                cout<<"Digite el numero base: ";
                cin>>num;
                cout<<"\nEl resultado es: "<<raizCuadrada(num)<<endl;
                break;

            case 3:
                cout<<"Haz salido del programa :)";
                break;
        default:
            cout<<"Opcion de menu incorrecta, intenta nuevamente.";
            break;
        }
        getch();
        system("cls"); //Limpiar la pantalla
    } while (opcion!=3);    
}

// Función de potencia
int potenciacion(int num, int exp){
    int potencia;
    potencia = pow(num, exp);
    return potencia;
}

// Función de raiz cuadrada
int raizCuadrada(int num){
    int raiz;
    raiz = sqrt(num);
    return raiz;
}

