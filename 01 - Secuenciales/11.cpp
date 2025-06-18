#include <iostream>
using namespace std;


    int main (){

        int minutos, minutosRestantes, horas, horasRestantes, dias;

        cout << "Ingresar Minutos:   ";
        cin >> minutos;
        cout << endl << endl;

        minutosRestantes = minutos % 60;
        horas = minutos / 60;
        horasRestantes = horas % 24;
        dias = horas / 24;

        cout << dias << " Dias con " << horasRestantes << " Horas y " << minutosRestantes << " Minutos " endl;

        return 0;
    }
