#include <iostream>
#include <stdio.h>

using namespace std;

void salario(){
    int horas,salario;

    cout << "Ingrese horas trabajadas: " << endl;
    cin>>horas;
    cout << "Ingrese salario hora: " << endl;
    cin>>salario;

    if(horas>40){
        cout<<"el salario del empleado es: "<< horas * (salario*1.5) <<endl;
    }
    else{
        cout<<"el salario del empleado es: "<< horas * salario <<endl;
    }
}


int main(int argc, const char** argv) {
    
    salario();


    return 0;
}