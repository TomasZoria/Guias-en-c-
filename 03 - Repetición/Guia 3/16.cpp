#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n,x,maximo,segundoMaximo;

        for(x=0;x<5;x++){
            cout << "Ingresar numero: ";
            cin >> n;

            if (x==0){
                maximo=n;
            }
            else {
                if (x==1){
                segundoMaximo=n;
                }
            }
            if(n>maximo && x>1){
                segundoMaximo=maximo;
                maximo=n;
            }
            else{
                if (n>segundoMaximo && x>1){
                    segundoMaximo=n;
                }
            }
        }
        cout << "El maximo numero en la lista es: " << maximo << endl;
        cout << "El segundo maximo numero en la lista es: " << segundoMaximo << endl;

        return 0;
    }
