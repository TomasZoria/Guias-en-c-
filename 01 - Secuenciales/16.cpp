#include <iostream>
using namespace std;


    int main (){
        setlocale(LC_ALL, "spanish");

            int Frascos, Pildoras, Betamol, Micilina, Acido;

            cout << "Ingresar numero de frascos: ";
            cin >> Frascos;
            cout << endl << endl;

            Pildoras = Frascos * 75;
            Betamol = Pildoras * 45;
            Micilina = Pildoras * 2000;
            Acido = Pildoras * 7;

            cout << "Betamol: " << Betamol << "mg" << endl;
            cout << "Micilina: " << Micilina << "mg" << endl;
            cout << "Acido: " << Acido  << "mg" << endl;



        return 0;
    }
