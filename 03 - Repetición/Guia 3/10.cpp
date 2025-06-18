#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

            int n,maximo,pos;
        bool primero;

        for(int x=0;x<10;x++){
            cout << "Ingresar numero: ";
            cin >> n;
            if (!primero){
                maximo=n;
                pos=x+1;
                primero=!primero;
            }
            if (n>maximo){
                maximo=n;
                pos=x+1;
            }
        }
        cout << "El numero maximo es " << maximo << " en posicion " << pos << endl;


        return 0;
    }
