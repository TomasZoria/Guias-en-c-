#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int a,b,c,suma,promedio;

        cout <<  "Ingresar 3 números";
        cin >> a >> b >> c;

        suma=a+b+c;
        promedio=suma/3;

        cout << "El promedio es: " << promedio;

        return 0;
    }
