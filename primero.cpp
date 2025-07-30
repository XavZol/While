#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    // Escriba un programa que calcule el valor de: 1*2*3*4*5*n (factorial)
    int a, i, resultado = 1;
    cout<<"Digite un numero para obtener el factorial:\n";

    for(i=1; i<=5; i++){
        resultado *= i; // Multiplicamos el resultado por i
    }// siempre para multiplicacion interativa colocar 1 para iniciar.
    cout<<"El resultado es: "<<resultado<<endl;
system("pause"); 
    return 0;   
}
