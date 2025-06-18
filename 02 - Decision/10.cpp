#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int a,b,c,d,e,maximo,minimo;

            cout << "Ingresar 5 numeros: ";
            cin >> a >> b >> c >> d >> e;

            minimo=a;
            maximo=a;

            if (b<minimo){
                minimo=b;
            }
            if (c<minimo){
                minimo=c;
            }
            if (d<minimo){
                minimo=d;
            }
            if (e<minimo){
                minimo=e;
            }

            if (b>maximo){
                maximo=b;
            }
            if (c>maximo){
                maximo=c;
            }
            if (d>maximo){
                maximo=d;
            }
            if (e>maximo){
                maximo=e;
            }
            cout << "El maximo es: " << maximo << endl;
            cout << "El minimo es: " << minimo << endl;

        return 0;
    }
