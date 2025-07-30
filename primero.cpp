#include<iostream>
#include<stdlib.h>  // para usar system()
#include<conio.h> // para usar getch()
using namespace std;
int main(){
    // programa que solicite un numero del 1 al 10 y muestre su tabla de multiplicar
int numero;
do{    
cout<<"Digite un numero del 1 al 10:\n";
cin>>numero;
} while(numero < 1 || numero > 10);
for ( int a=1; a<=20; a++){
    cout<<numero<<"*"<<a<<"="<<numero*a<<endl;
}
system("pause");
    return 0;   

}
