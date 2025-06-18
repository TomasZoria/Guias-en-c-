#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int dia,mes,anio,diaActual,mesActual,anioActual,edad;

        cout << "Ingresar dia(xx)/mes(xx)/año(xxxx) de nacimieto" << endl;
        cin >> dia >> mes >> anio;
        cout << "Ingresar dia(xx)/mes(xx)/año(xxxx) actual" << endl;
        cin >> diaActual >> mesActual >> anioActual;

        if (mes<mesActual){
            edad=edad=anioActual-anio;
        }
                else {
            edad=anioActual-anio-1;
        }
        if (mes==mesActual){
            if (diaActual>dia){
                edad=anioActual-anio;
            }
        }


        cout << "La edad es: " <<edad;
        return 0;
    }
