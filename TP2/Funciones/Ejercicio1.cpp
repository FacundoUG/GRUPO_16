#include <iostream>
#include <stdio.h>

using namespace std;


double Calcular(double radio){
    double sup= 3.141492*(radio*radio),perimetro=2*(3.141492)*radio;

    cout <<"La superficie es: "<<sup<<" y el perimetro es: "<<perimetro<<endl;
    
    return 0;
}


int main(int argc, const char** argv) {
    double radio;

    cout <<"Ingrese el radio del circulo: "<<endl;
    cin>> radio;

    Calcular(radio);

    return 0;
}