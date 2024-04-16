#include<iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Edad: ";
    cin>>edad;

    if (edad>=18){
        cout<<"Tiene edad para votar"<<endl;
        }
    else{
        cout<<"No tiene edad para votar"<<endl;
    }
    return 0;
};