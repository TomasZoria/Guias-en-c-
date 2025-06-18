#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int cantidad,n,contador=0;

        cout << "Ingresar la cantidad de numeros: ";
        cin >> cantidad;

        for (int x=0;x<cantidad;x++){
            cout << "Ingresar numero: ";
            cin >> n;
                if(n>0){
                    contador++;
                }
        }

        cout << "Hay " << contador << " positivos" << endl;

        return 0;
    }
