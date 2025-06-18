#include <iostream>
using namespace std;


    int main (){

        float Importe,importeDescuento,Descuento;

        cout << "Ingresar Importe e Importe con Descuento ";
        cin >> Importe >> importeDescuento;
        cout << endl << endl;

        Descuento = Importe - importeDescuento;
        Descuento = (Descuento / Importe) * 100;

        cout << "El descuento aplicado fue del: " << Descuento << "%";

        return 0;
    }
