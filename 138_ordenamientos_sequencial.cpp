/*
BUSQUEDA SECUENCIAL
Se puede aplicar para búsquedas internas y externas, y hay que ir pasando
secuencialmente por todos los elementos de la estructura hasta encontrar
el elemento o acabr la lista
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int num[5], dato, i=0, posicion;
    bool encontrado=false;

    cout<<"Digite los elementos del arreglo"<<endl;
    for(int i=0; i<5; i++){
        cout<<i<<". Digite un numero: ";
        cin>>num[i];
    }

    cout<<"\nDigite un elemento a buscar: ";
    cin>>dato;

    // Algoritmo de busqueda secuencial
    while(i<5 && encontrado == false){
        if(num[i] == dato){
            encontrado = true;
            posicion = i;
        }
        i++;
    }

    if(encontrado == true){
        cout<<"\nElemento encontrado, posicion "<<posicion<<endl;
    }
    else{
        cout<<"\nElemento no encontrado"<<endl;
    }

    getch();
    return 0;
}


