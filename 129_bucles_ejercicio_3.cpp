/*
Hacer un programa que pida N números al usuario, hasta que el usuario
lo decida, luego calcular el promedio de dichos números
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    // variables
    // numero -> almacena cada número ingresado
    // suma -> acumula y suma cada valor ingresado
    // promedio -> almacena el calculo del promedio
    // contador -> cuenta el número de veces que ingresamos un número
    // ingresar -> Determina si continuamos ingresando datos o no
    int numero, suma=0, promedio, contador=0;
    char ingresar;

    do
    {
        // Ingresamos numero
        cout<<"\nIngresa un numero: ";
        cin>>numero;
        suma += numero; //Incrementamos la suma
        contador++; //Incrementamos el contador en 1
        // Consultamos el ingreso de más números
        cout<<"\nDesea ingresar mas numeros? (y/n): ";
        cin>>ingresar; 
    } while (ingresar=='y' || ingresar=='Y');

    // Caculamos e imprimimos el promedio
    promedio = suma / contador;
    cout<<"\nEl promedio es de: "<<promedio<<endl;
    
    getch();
    return 0;
}

