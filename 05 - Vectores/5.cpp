#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,v[10],maxPar,minImpar;

        cout << "ingresar 10 numeros: ";
            for(x=0; x<10; x++)
            {
                cin >> v[x];
                if(x==0){
                    maxPar=0;
                    minImpar=0;
                }
                if (v[x]%2==0){
                    if (v[x]>maxPar){
                        maxPar=v[x];
                    }
                }
                else{
                        if (v[x]<minImpar){
                            minImpar=v[x];
                        }
                }

            }
            cout << "el mayor par es: " << maxPar << endl;
            cout << "el menor impar es: " << minImpar << endl;
        return 0;
    }
