#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int a,b,c,d,e,contadorPositivo=0,contadorNegativo=0,contador0=0;

        cout << "Ingresar 5 numeros: ";
        cin >> a >> b >> c >> d >> e;

        if (a==0){
            contador0++;
        }
        else {
            if (a<0){
                contadorNegativo++;
            }
            else{
                contadorPositivo++;
            }
        }
        if (b==0){
            contador0++;
        }
        else {
            if (b<0){
                contadorNegativo++;
            }
            else{
                contadorPositivo++;
            }
        }
        if (c==0){
            contador0++;
        }
        else {
            if (c<0){
                contadorNegativo++;
            }
            else{
                contadorPositivo++;
            }
        }
        if (d==0){
            contador0++;
        }
        else {
            if (d<0){
                contadorNegativo++;
            }
            else{
                contadorPositivo++;
            }
        }
        if (e==0){
            contador0++;
        }
        else {
            if (e<0){
                contadorNegativo++;
            }
            else{
                contadorPositivo++;
            }
        }

        cout << "Positivos: " << contadorPositivo << endl;
        cout << "Negativos: " << contadorNegativo << endl;
        cout << "Igual a cero: " << contador0 << endl;
        return 0;
    }
