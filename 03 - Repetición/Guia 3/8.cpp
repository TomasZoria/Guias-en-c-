#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,n,cPositvo=0,cNegativo=0,cCero=0;
        float pPositvo,pNegativo,pCero;

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
            pPositvo=((float)cPositvo*100)/10;
            pNegativo=((float)cNegativo*100)/10;
            pCero=((float)cCero*100)/10;
            cout << "Hay " << pPositvo << "% numeros positivos" << endl;
            cout << "Hay " << pNegativo << "% numeros negativos" << endl;
            cout << "Hay " << pCero << "% numeros iguales a 0" << endl;

        return 0;
    }
