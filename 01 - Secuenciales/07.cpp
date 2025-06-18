#include <iostream>
using namespace std;


    int main (){

        float Descuento,Importe,Total;

        cout << "Ingresar Importe y Descuento: ";
        cin >> Importe >> Descuento;
        cout << endl << endl;

        Total = (Importe*Descuento)/100;
        Importe = Importe - Total;

        cout << "Total a pagar " << Importe;


        return 0;
    }
