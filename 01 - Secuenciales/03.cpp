#include <iostream>
using namespace std;


    int main (){

        int autosVendidos,Sueldo;

        cout << "Ingresar autos vendidos" << endl;
        cin >> autosVendidos;
        cout << endl << endl;

        Sueldo=(autosVendidos*700)+5000;

        cout << "Sueldo a pagar: " << Sueldo << endl;

        return 0;
    }
