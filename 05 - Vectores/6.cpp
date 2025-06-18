#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,v[10],pos1=0,pos2=0,x1,x2;

        cout << "ingresar 10 numeros: ";
    for(x=0; x<10; x++)
    {
        cin >> v[x];

        if (v[x]%2==0){

            pos2=v[pos1];
            x2=x1;

            pos1=v[x];
            x1=x;
        }
    }
    cout << "el anteultimo par es: " << pos2 << " en " << x2 << " posicion" << endl;
    cout << "el ultimo par es: " << pos1 << " en " << x1 << " posicion" << endl;

        return 0;
    }
