#include <iostream>
#include <stdio.h>

using namespace std;

int suma1(int x, int y){
    return x+y;
}

int suma2(int x, int y, int z){
    z=x+y;

    return z;
}

int main(int argc, const char** argv) {
    int val1=0, val2=0,result=0;

    cout<<"Ingrese el primer valor: "<<endl;
    cin>>val1;
    cout<<"Ingrese el segundo valor: "<<endl;
    cin>>val2;

    cout<<"Resultado con 2 parametros: "<<suma1(val1,val2)<<endl;

    cout<<"Resultado con 3 parametros: "<<suma2(val1,val2,result)<<endl;

    return 0;
}