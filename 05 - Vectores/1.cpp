#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");
            int x,v[10],suma=0;

            cout << "ingresar 10 numeros: ";
            for(x=0;x<10;x++){
                cin >> v[x];
                suma+=v[x];
            }
            cout << suma << endl;

        return 0;
    }
