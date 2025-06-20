#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,legajo,legajoMaximo;
        float sueldo,maximo;
        for (x=0; x<10; x++)
    {
        cout << "Ingresar sueldo y legajo: ";
        cin >> sueldo >> legajo;
            if (x==0 || sueldo>maximo){
                maximo=sueldo;
                legajoMaximo=legajo;
            }
        }
        cout << "El legajo del mayor sueldo es: " << legajoMaximo << endl;

        return 0;
    }
