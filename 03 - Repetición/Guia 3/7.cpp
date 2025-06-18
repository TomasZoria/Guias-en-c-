#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,n,cPositvo=0,cNegativo=0,cCero=0;

            for (x=0;x<10;x++){
                cout << "Ingresar numero: ";
                cin >> n;
                if (n==0){
                    cCero++;
                }
                else{
                    if (n>0){
                        cPositvo++;
                    }
                    else{
                        cNegativo++;
                    }
                }
            }
            cout << "Hay " << cPositvo << " numeros positivos" << endl;
            cout << "Hay " << cNegativo << " numeros negativos" << endl;
            cout << "Hay " << cCero << " numeros iguales a 0" << endl;

        return 0;
    }
