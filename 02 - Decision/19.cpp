#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int horas,x=1,total;
        char lenguaje;
        bool urgente;

        cout << "Ingresar cantidad de horas:        ";
        cin >> horas;
        cout << "Ingresar el lenguaje(C/C++ = C // C# = # // PYTHON=P // GO=G):     ";
        cin >> lenguaje;
        cout << "¿Es urgente?(1=Si // 0=No)      ";
        cin >> urgente;

            if (lenguaje=='C'){
                total=horas*7500;
            }
            if (lenguaje=='#'){
                total=horas*6100;
            }

            if (lenguaje=='P'){
                total=horas*5400;
            }

            if (lenguaje=='G'){
                total=horas*5000;
            }
            if (urgente){
                total=total*((total*120)/100);
            }
            cout << "El total a pagar es: " << total;

        return 0;
    }
