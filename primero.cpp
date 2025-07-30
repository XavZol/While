#include<iostream>
#include<stdlib.h>  
#include<conio.h> // para usar getch()
using namespace std;
int main(){
    // programa con bucle do while
    int i;
    i=10;
    do{
        cout<<i<<endl;
        i--; // lo que hace es incrementar i en 1
    }while(i>=1); // mientras i sea menor o igual a 10 se ejecuta el bucle
    getch(); // espera a que se presione una tecla antes de cerrar la consola
system("pause"); // pausa la consola para ver el resultado
    return 0;   

}
