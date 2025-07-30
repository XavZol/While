#include<iostream>
#include<conio.h> // para usar getch()
using namespace std;
int main(){
    int a, b = 0, c;
    do{
    cout << "Ingrese el primer numero: ";
    cin>>a;
    if(a>0){
     b++; // Incrementa el contador de números positivos   
    }
    } while(a != 0);
    cout<<"\nCantidad de numeros positivos: "<<b<<endl;
    getch();
    return 0;   
}
