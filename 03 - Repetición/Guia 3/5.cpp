#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,a,b,aux;

        cout << "Ingresar 2 numeros: ";
        cin >> a >> b;

        if (a>b){
            aux=a;
            a=b;
            b=aux;
        }
        a++;
        for (a;a<b;a++){
            cout << a << endl;
        }

        return 0;
    }
