#include <iostream>
#include <stdio.h>

using namespace std;

double mult(double x, int y){
    return x*y;
}


int main(int argc, const char** argv) {
    double real;
    int entero;
    cout << "Ingrese el valor real: " <<endl;
    cin>>real;
    cout << "Ingrese el valor entero: " <<endl;
    cin>>entero;

    cout<<"El valor de la multiplicacion x*n con x real y n entero es: "<<mult(real,entero)<<endl;

    return 0;
}