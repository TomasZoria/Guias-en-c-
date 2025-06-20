#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n,nAnterior,x;
        bool orden=true;

            for (x=0;x<8;x++){
                cout << "Ingresar numero: ";
                cin >> n;
                if(x==0){
                    nAnterior=n;
                }
                if (nAnterior>n){
                    orden=false;
                }
                nAnterior=n;
            }
            if(orden){
            cout << "El conjunto esta ordenado" << endl;
            }
            else{
                cout << "El conjunto esta desordenado" << endl;
            }
        return 0;
    }
