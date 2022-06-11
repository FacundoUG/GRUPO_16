#include <iostream>
#include <stdio.h>

using namespace std;

int mcd(int a, int b){
    int resto;

    resto=a%b;
    if(resto==0){
        return b;
    }
    else{
        while(resto!=0){
            resto=b%resto;    
        }
        return resto;
    }
}

int main(int argc, const char** argv) {
    int a,b;
   
    cout << "Ingrese el valor de a: " << endl;
    cin>>a;
    cout << "Ingrese el valor de b: " << endl;
    cin>>b;

    cout<<"El mcd es: "<<mcd(a,b)<<endl;

    return 0;
}