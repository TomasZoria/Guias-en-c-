#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int a,b,c;

        cout << "ingresar 3 numeros:";
        cin >> a >> b >>c;

        if (a==b && b==c){
                cout << "son iguales";
        }
        return 0;
    }
