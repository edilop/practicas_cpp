// La sentencia Switch

#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Digite un numero entre 1 y 4: ";
    cin>>numero;

    switch (numero)
    {
    case 1:
        cout<<"Es el numero 1"<<endl;break;
    case 2:
        cout<<"Es el numero 2"<<endl;break;
    case 3:
        cout<<"Es el numero 3"<<endl;break;
    case 4:
        cout<<"Es el numero 4"<<endl;break;    
    
    default:
        cout<<"El numero no esta entre 1 y 4"<<endl;break;   
        break;
    }

    return 0;
};