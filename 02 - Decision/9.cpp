#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int a,b,c,maximo;

        cout <<  "Ingresar 3 números";
        cin >> a >> b >> c;

        maximo=a;

        if(maximo<b){
            maximo=b;
        }
        if (maximo<c){
            maximo=c;
        }
        cout << "El maximo es: " << maximo;

        return 0;
    }
