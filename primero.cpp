#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    // Programa para leer los enteros que se introduzca un valor que [20-30] o se introduzca el valor 0. el programa debe entregar la suma de los numeros introducidos mayores a 0 introducidos.
    int a, suma = 0;
    do{
        cout<<"Introduzca un valor entre 20 y 30\n";
        cin>>a;
        if (a > 0) {
            suma += a;
        }
    }while(a < 20 || a > 30 && a != 0);
    
    cout<<"La suma de los numeros introducidos es: "<<suma<<endl;
    system("pause");
    return 0;   
}
