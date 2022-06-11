#include <iostream>
#include <stdio.h>

using namespace std;

string mes(int x){

    string M="";

    switch (x)
    {
    case 1:
        M="Enero";
        break;
    case 2:
        M="Febrero";
    break;
    case 3:
        M="Marzo";
    break;
    case 4:
        M="Abril";
    break;
    case 5:
        M="Mayo";
    break;
    case 6:
        M="Junio";
    break;
    case 7:
        M="Julio";
    break;
    case 8:
        M="Agosto";
    break;
    case 9:
        M="Septiembre";
    break;
    case 10:
        M="Octubre";
    break;
    case 11:
        M="Noviembre";
    break;
    case 12:
        M="Diciembre";
    break;
    default:
        break;
    }

    return M;
}

int main(int argc, const char** argv) {
    int m=0;

    cout<<"Ingrese el valor numerico del mes: "<<endl;
    cin>>m;

    cout<<mes(m)<<endl;

    return 0;
}