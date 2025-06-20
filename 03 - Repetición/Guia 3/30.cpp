#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n,x,primoAnterior,contador=0,i;
        bool primerPrimo,orden=true;

        for (x=1;x<=7;x++){
                cout << "Ingresar numero: ";
                cin >> n;
                contador=0;
        for (i=1;i<=n;i++){
            if (n%i==0){
                contador++;
            }
        if (contador==2 && orden==true){
           if (primerPrimo==false){
            primoAnterior=n;
            primerPrimo=true;
           }
           else{
            if (primoAnterior>n){
                orden=false;
            }
           }
        }
        }
        primoAnterior=n;
        }
        if (orden){
            cout << "Conjunto ordenado" << endl;
        }
        else {
            cout << "Conjunto desordenado" << endl;
        }
        return 0;
    }
