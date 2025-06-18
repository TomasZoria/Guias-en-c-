#include <iostream>
using namespace std;


    int main (){

        float sem1,sem2,sem3,sem4,Total,Promedio;
        float ps1,ps2,ps3,ps4;

        cout << "Ingresar datos de la semana" << endl;
        cin >> sem1 >> sem2 >> sem3 >> sem4;
        cout << endl;

        Total = sem1+sem2+sem3+sem4;
        Promedio = Total/4;
        ps1 = (sem1/Total)*100;
        ps2 = (sem2/Total)*100;
        ps3 = (sem3/Total)*100;
        ps4 = (sem4/Total)*100;

        cout << "Promedio " << Promedio << "$" << endl;
        cout << "Semana 1 " << ps1 << "%" << endl;
        cout << "Semana 2 " << ps2 << "%" << endl;
        cout << "Semana 3 " << ps3 << "%" << endl;
        cout << "Semana 4 " << ps4 << "%" << endl;

        return 0;
    }
