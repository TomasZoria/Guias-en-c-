#include <iostream>
using namespace std;


    int main (){

        int horas, dias, horasRestantes;

        cout << "Ingresar Horas    ";
        cin >> horas;
        cout << endl << endl;

        dias = horas / 24;
        horasRestantes = horas% 24;

        cout << dias << " Dias con " << horasRestantes<< " Horas";

        return 0;
    }
