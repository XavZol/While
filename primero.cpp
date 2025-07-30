#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
    // Escriba un programa que calcule el valor de: 1^2 + 2^2 + 3^2 + ... + n^2, donde n es un número entero positivo ingresado por el usuario.
    int n, suma = 0, elevacion = 0;
    cout << "Digite el numero de elememntos a sumar\n";
    cin>>n;
    for(int i=1; 1<=n; i++){
        elevacion = pow(i, 2);
        suma += elevacion;
    }
    cout<<"La suma de los cuadrados de los numeros es:\n";
    cout<<suma<<"\n";
        system("pause"); 
    return 0;   
}
