#include <iostream>
#include <stdio.h>

using namespace std;

int factorial(int x){
    int fact=1;
    for(int i=1; i<=x;i++){
        fact*=i;
    }
    return fact;
}

int main(int argc, const char** argv) {
    int a;

    cout<<"Ingrese un valor entero: "<<endl;
    cin>>a;
    if(a>0){
        cout<<"El factorial de "<<a<<" es: "<<factorial(a)<<endl;
    }

    return 0;
}