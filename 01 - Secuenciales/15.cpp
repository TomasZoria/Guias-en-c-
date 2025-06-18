#include <iostream>
#include <locale.h>
using namespace std;


    int main (){
        setlocale(LC_ALL, "spanish");

        int tempMax, tempMin, ampTermica;

        cout << "Ingresar temperatura máxima y minima ";
        cin >> tempMax >> tempMin;
        cout << endl << endl;

        ampTermica = tempMax - tempMin;

        cout << "La amplitud termica es: " << ampTermica <<endl;

        return 0;
    }
