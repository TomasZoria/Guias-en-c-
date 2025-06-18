#include <iostream>
using namespace std;


    int main (){

        int huevos, huevosRestantes, cajas, pCajas, pHuevos,pTotal;

        cout << "Ingresar cantidad de Huevos: ";
        cin >> huevos;
        cout << endl << endl;

        cajas = huevos / 12;
        huevosRestantes = huevos % 12;
        pCajas = cajas * 1000;
        pHuevos = huevosRestantes * 120;
        pTotal = pCajas + pHuevos;

        cout << "Se vendieron " << cajas << " cajas y " << huevosRestantes << " Huevos sueltos." << endl;
        cout << "Total a pagar: $" << pTotal << endl;

        return 0;
    }
