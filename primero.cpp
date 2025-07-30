#include<iostream>
#include<conio.h> // para usar getch()
using namespace std;
int main(){
    // Programa de la suma de los cuadrados de los 10 primeros enteros mayores que 10
    int a = 0, cuadrado;
    for (int i = 1; i <= 10; i++){

        cuadrado = i*i;
        a += cuadrado; // Suma de los cuadrados

    }
    cout<<"La suma de los cuadrados de los 10 primeros enteros mayores que 10 es: " << a << endl;
    getch();
    return 0;   
}
