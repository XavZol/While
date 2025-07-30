#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    // Escriba un programa que calcule el valor de: 1!+2!+3!+4!+5!+6!+n!            
int n, i, j, factorial = 1, suma=0;

cout<<"Digite el numero de elementos a sumar:\n";
cin>>n;
for(i=1; i<=n; i++){
    factorial *= i; // Calcular el factorial de i
suma += factorial;  // Sumar el factorial al total
}
cout<<"La suma de los factoriales es: "<<suma<<endl;
    system("pause"); 
    return 0;   
}
