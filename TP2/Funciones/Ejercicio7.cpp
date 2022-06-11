#include <iostream>
#include <stdio.h>

using namespace std;

int Conversor(int x){
    int hora=(x/100),min=(x%100);
    hora*=60;

    return hora+min;
}

int cantMinExcedidos(int libres,int utilizados){
    int resultado;
    resultado=utilizados-libres;
    return resultado;
}

float cantMontoAbonar(float abono,int excedidos,float costomin){
    int resultado,resultadoIva;
    resultado=(abono+(excedidos*costomin));
    resultadoIva= resultado + (resultado*0.21);
    return resultadoIva;
}
int main(int argc, const char** argv) {
    //Parte A//
    int horaMin;
    
    cout<<"Ingrese la hora en formato HHMM: "<<endl;
    cin>>horaMin;

    cout<<"La hora HHMM en minutos representa: "<<Conversor(horaMin)<<endl;

    //Parte A//

    //Parte B//
    int minLibres, minUtilizados, minExcedidos=0;
    float costoAbono, costoPorMin, montoAbonar=0;


    cout<<"\nIngrese costo de abono telefonico:\n";
    cin>>costoAbono;
    cout<<"\nIngresar cantidad de minutos libres:\n";
    cin>>minLibres;
    cout<<"\nIngresar el cargo por minutos excedentes:\n";
    cin>>costoPorMin;
    cout<<"\n\n\nCuantos minutos utilizo?:\n";
    cin>>minUtilizados;

    minExcedidos=cantMinExcedidos(minLibres,minUtilizados);
    montoAbonar=cantMontoAbonar(costoAbono,minExcedidos,costoPorMin);

    cout<<"\nMinutos excedidos: "<<minExcedidos<<endl<<endl;
    cout<<"\nMonto en pesos a abonar: "<<" $"<<montoAbonar<<endl<<endl;

    //Parte B//

    return 0;
}