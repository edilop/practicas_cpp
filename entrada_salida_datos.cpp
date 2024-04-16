// Entrdad  y salida de información

#include<iostream>;

using namespace std;

int main(){
    string nombre;

    cout<<"Ingresa un nombre: ";
    getline(cin, nombre);

    cout<<"Mi nombre es: "<<nombre<<endl;

    return 0;
}