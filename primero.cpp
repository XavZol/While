#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    // Escribe un programa que calcule el valor de: 1+3+5+...+2n-1.
 // solicitar los 10 numeros impares pares e impares por ejemplo.
    int n, nele,suma = 0;
    cout<<"Digite un numero para la suma:\n";
    cin>>nele;
    fo(int i = 1; 1<=2*nele-1; i++){
        suma += i;
    }
    cout<<"la suma es:\n"<<suma<<endl;
getch();    
    return 0;   
}
