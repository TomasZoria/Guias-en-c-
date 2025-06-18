#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n,maximo;
        bool primero;

        for(int x=0;x<10;x++){
            cout << "Ingresar numero: ";
            cin >> n;
            if (!primero){
                maximo=n;
                primero=!primero;
            }
            if (n>maximo){
                maximo=n;
            }
        }
        cout << "El numero maximo es " << maximo << endl;

        return 0;
    }
