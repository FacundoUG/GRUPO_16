#include <iostream>
#include <cstring>


using namespace std;

float CalcularPorcentajeDiferencia(int A ,int B){
    float resultado;

    resultado=(B-A)*100/(A+B);


    return resultado;
}

int main(){
    int num1, num2;
    float porcentaje;

    cout<<"\nIngresar el primer numero:\n";
    cin>>num1;
    cout<<"\nIngresar el segundo numero:\n";
    cin>>num2;

    porcentaje=CalcularPorcentajeDiferencia(num1,num2);

    cout<<"\nResultado: "<<porcentaje<<endl<<endl;

    return 0;
}