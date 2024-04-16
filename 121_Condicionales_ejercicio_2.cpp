/*
Determinar si un alumno aprueba o reprueba un curso,
sabiendo que aprobará si su promedio de 3 calificaciones
es mayor o igual a 70; reprueba caso contrario.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    // Variables
    float calif_1, calif_2, calif_3, promedio;

    // Capturamos las notas
    cout<<"Ingresa las 3 calificaciones: ";
    cin>>calif_1>>calif_2>>calif_3;

    // Calculamos el promedio
    promedio = (calif_1 + calif_2 + calif_3) / 3;

    // Imprimimos si aprueba o reprueba
    if (promedio >= 70)
    {
        cout<<"El promedio es de: "<<promedio<<" -> Aprobado"<<endl;
    }
    else
    {
        cout<<"El promedio es de: "<<promedio<<" -> Reprobado"<<endl;

    }

    getch(); //Evita que el ejecutable se cierre
    return 0;
};