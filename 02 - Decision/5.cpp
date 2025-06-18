#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        float importe=1,descuentoAplicado;



    while(importe!=0)
    {
        cout << "ingrese el importe a descontar: ";
        cin >> importe;
        if (importe>500)
        {
            descuentoAplicado=importe-(importe*0.15);
            cout << "el descuento aplicado fue del 15%: " << descuentoAplicado;
        }
        else {
            if (importe<=500 && importe>= 100){
                    descuentoAplicado=importe-(importe*0.10);
                cout << "el descuento aplicado fue del 10%: " << descuentoAplicado;
            }
            else {
                descuentoAplicado=importe-(importe*0.05);
                cout << "el descuento aplicado fue del 5%: " << descuentoAplicado;
            }
        }
        cout << endl;
    }
    return 0;
}
