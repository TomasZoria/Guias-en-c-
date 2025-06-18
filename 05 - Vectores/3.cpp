#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");
        int x,v[10],maximo=0,pos;

        cout << "ingresar 10 numeros: ";
            for(x=0;x<10;x++){
                cin >> v[x];
                if (v[x]>maximo){
                    maximo=v[x];
                    pos=x;
                }

            }
                            cout << "el maximo numero es: " << maximo << endl;
                cout << "en la posicion: " << pos+1 << endl;

        return 0;
    }
