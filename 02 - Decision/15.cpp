#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "spanish");

    int anio;

    cout << "Ingresar año: ";
    cin >> anio;
    if (anio%4==0)
    {
        if(anio%100==0 && anio%400!=0)
        {
            cout << "No es bisiesto" << endl;
        }
        else
        {
            cout << "Es biesiesto" << endl;
        }
    }

    else
    {
        cout << "No es bisiesto" << endl;

    }

    return 0;
}
