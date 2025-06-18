#include <iostream>
using namespace std;


    int main (){

        int horas, minutos, minutosRestantes;

        cout << "Ingresar Minutos    ";
        cin >> minutos;
        cout << endl << endl;

        horas = minutos / 60;
        minutosRestantes = minutos % 60;

        cout << horas << " Horas con " << minutosRestantes << " Minutos";

        return 0;
    }
