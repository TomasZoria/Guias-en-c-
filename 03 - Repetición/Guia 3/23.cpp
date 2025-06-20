#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,n,nAnterior=2,contador=0;

        for (x=0;x<10;x++){
            cout << "Ingresar numero: ";
            cin >> n;

            if(n%2!=0 && nAnterior%2!=0){
                contador++;
            }
            nAnterior=n;
        }
        cout << "Hay " << contador << " duplas" << endl;

        return 0;
    }
