#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n,maximo,minimo;
        bool primerNegativo,primerPositivo;

        for(int x=0;x<10;x++){
            cout << "Ingresar numero: ";
            cin >> n;
            if (!primerNegativo && n<0){
                maximo=n;
                primerNegativo=!primerNegativo;
            }
            if (!primerPositivo){
                minimo=n;
                primerPositivo=!primerPositivo;
            }
            if (n>maximo && n<0){
                maximo=n;
            }
            if(n<minimo && n>0){
                minimo=n;
            }
        }
        cout << "El maximo negativo es " << maximo << endl;
        cout << "El minimo positivo es " << minimo << endl;

        return 0;
    }
