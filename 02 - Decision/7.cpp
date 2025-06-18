#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int a,b,c;

        cout << "ingresar 3 numeros:";
        cin >> a >> b >>c;

        if(a!=b && a!=c && b!=c){
            cout << "son distintos" << endl;
        }
        return 0;
    }
