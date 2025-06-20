#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,n,maximo,segundoMaximo;
        bool maximoSegundo;

        for (x=0;x<10;x++){
            cout << "Ingresar numero: ";
            cin >> n;
            if (x==0){
                maximo=n;
            }
            else{
                if (maximoSegundo==false && n!=maximo){
                    segundoMaximo=n;
                    maximoSegundo=true;
                }
                else{
                    if (n>maximo){
                        segundoMaximo=maximo;
                        maximo=n;
                    }
                    else{
                        if(n>segundoMaximo && n!=maximo){
                            segundoMaximo=n;
                        }
                    }
                }
            }

        }
        cout << "El maximo es: " << maximo << " y el siguiente maximo es: " << segundoMaximo << endl;

        return 0;
    }
