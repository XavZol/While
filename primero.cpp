#include<iostream>
#include<conio.h> // para usar getch()
using namespace std;
int main(){
    // Programa lea la temperatura cada 4 horas por 24 horas y calcule la temperatura media del dia.
    float temp, mayor=0, menor=999;
    float total=0; promedio=0;

    for( int a=0; a<24, a+=4){
        cout<<"Digite temperatura de la hora"<<a<<":";
        cin>>temp;
        total += temp;
        if (temp > mayor){
            mayor = temp;
        }
        if (temp < menor){
            menor = temp;
        }
        promedio = total / 6; // 24 horas / 4 horas por lectura = 6 lecturas

        cout<<"Temperatura media hasta la hora "<<a<<": "<<promedio<<endl;
        cout<<"Temperatura mayor hasta la hora "<<a<<": "<<mayor<<endl;
        cout<<"Temperatura menor hasta la hora "<<a<<": "<<menor<<endl;
    }
    getch();
    return 0;   
}
