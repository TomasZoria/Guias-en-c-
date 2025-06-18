#include <iostream>
using namespace std;


    int main (){

        int Importe, bMil, bQ, bDos, bCien;

        cout << "Ingresar importe a retirar: $";
        cin >> Importe;
        cout << endl << endl;

        bMil = Importe / 1000;
        Importe %= 1000;
        bQ = Importe /500;
        Importe %= 500;
        bDos = Importe / 200;
        Importe %= 200;
        bCien = Importe / 100;

        cout << "Se debe entregar " << endl;
        cout << bMil << " billetes de $1000, " << endl;
        cout <<  bQ << " billetes de $500, " << endl;
        cout << bDos << " billetes de $200, " << endl;
        cout <<  bCien << " billetes de $100." << endl;

        return 0;
    }
