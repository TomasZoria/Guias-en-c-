#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n,maximo,minimo;
        bool primero;

        for(int x=0;x<10;x++){
            cout << "Ingresar numero: ";
            cin >> n;
            if (!primero){
                maximo=n;
                minimo=n;
                primero=!primero;
            }
            if (n>maximo){
                maximo=n;
            }
            if(n<minimo){
                minimo=n;
            }
        }
        cout << "El numero maximo es " << maximo << endl;
        cout << "El numero minimo es " << minimo << endl;


        return 0;
    }
