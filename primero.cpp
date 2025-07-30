#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
    // Escriba un programa que calcule el resultado de: 1-2+3-4+5-6+7-8+9-10
    int nele, par, sumapar=0, sumaimpar=0;;

    cout<<"Digite el numero de elementos a sumar\n";
    cin>>nele;
    for(int i=1; i<=nele; i++){
        if(i%2==0){
           par - i *-1;
           sumapar += par;
        }else{
           sumaimpar += i;}
        }
    cout<<"La suma total de pares e impares es:\n"<<sumapar + sumaimpar<<endl;
        system("pause"); 
    return 0;   
}
