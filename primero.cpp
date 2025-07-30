#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    // Programa para que calcule x * y donde ambos sean enteros positivos.
    int x, y, pow=1;
    cout<<"Digite el valor de x:\n";
    cin>>x;
    cout<<"Digite el valor de y:\n";
    cin>>y;

    for (int i=1; i<=y; i++){

        pow = pow * x;
    }
    cout<<"El resultado de "<<x<<" elevado a "<<y<<" es: "<<pow<<endl;
    system("pause");
    return 0;   
}
