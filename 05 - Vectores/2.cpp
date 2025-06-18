#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");
        int x,v[10],suma=0;
        float promedio;

            cout << "ingresar 10 numeros: ";
            for(x=0;x<10;x++){
                cin >> v[x];
                suma+=v[x];
            }
            promedio=(float)suma/10;
           cout << "el promedio es: " << promedio << endl;
            for (x=0;x<10;x++){
                if (v[x]>promedio){
                    cout << v[x] << "   es mayor al promedio" << endl;
                }
            }

        return 0;
    }
