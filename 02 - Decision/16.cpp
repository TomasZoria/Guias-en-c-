#include <iostream>
using namespace std;


int main ()
{
    setlocale(LC_ALL, "spanish");

    int nota, promo=0, eFinal=0;


    cout << "Inresar nota del primer examen: ";
    cin >> nota;
    if(nota>=7)
    {
        promo++;
    }
    else
    {
        if (nota>=4)
        {
            eFinal++;
        }
    }
    cout << "Inresar nota del segundo examen: ";
    cin >> nota;
    if(nota>=7)
    {
        promo++;
    }
    else
    {
        if (nota>=4)
        {
            eFinal++;
        }
    }
    cout << "Inresar nota del tercer examen: ";
    cin >> nota;
    if(nota>=7)
    {
        promo++;
    }
    else
    {
        if (nota>=4)
        {
            eFinal++;
        }
    }
    cout << "Inresar nota del cuarto examen: ";
    cin >> nota;
    if(nota>=7)
    {
        promo++;
    }
    else
    {
        if (nota>=4)
        {
            eFinal++;
        }
    }

    if (promo==4)
    {
        cout << "Promociona" << endl;
    }
    else
    {
        if (eFinal>=3 || promo>=3 || eFinal+promo>=3)
        {
            cout << "Rinde examen final" << endl;
        }
        else
        {
            if (eFinal>=1 || promo>=1)
            {
                cout << "Recupera parciales" << endl;
            }
            else
            {
                cout << "Recursa" << endl;
            }
        }
    }

    return 0;
}
