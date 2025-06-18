#include <iostream>
using namespace std;


    int main (){

        float importe, descuento, descuentoAplicado,total;

        cout << "Ingresar importe y descuento: ";
        cin >> importe >> descuento;
        cout << endl << endl;

        descuentoAplicado = (importe * descuento) / 100;
        total = importe - descuentoAplicado;

        cout << "Importe: $" << importe << endl;
        cout << "Descuento: $" << descuentoAplicado << endl;
        cout << "Total: $" << total << endl;

        return 0;
    }
