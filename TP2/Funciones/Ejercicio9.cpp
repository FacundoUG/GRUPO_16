#include <iostream>
#include <stdio.h>

using namespace std;

int pow(int x, int y){
    int pot=1;
    for(int i=0;i<y;i++){
        pot*=x;
    }
    return pot;
}


int main(int argc, const char** argv) {
    int base, potencia;

    cout<<"Ingrese la base: "<<endl;
    cin>>base;
    cout<<"Ingrese la potencia: "<<endl;
    cin>>potencia;

    cout<<"El numero base "<<base<<" elevado a la potencia "<<potencia<<" es: "<<pow(base,potencia)<<endl;


    return 0;
}