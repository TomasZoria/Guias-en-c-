#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,n,primerPar,ultimoPrimo,posPar,posPrimo,i;
        bool primero;

        for (x=1;x<=7;x++){
            cout << "Ingresar numero: ";
            cin >> n;
            int contador=0;
            for(i=1;i<=n;i++){
                if(n%i==0){
                    contador++;
                }
            }
            if (primero==false && n%2==0){
                primerPar=n;
                posPar=x;
                primero=true;
            }

            if (contador==2){
                ultimoPrimo=n;
                posPrimo=x;
            }
        }
        cout << "El primer par que aparece es " << primerPar << " en la posicion " << posPar << endl;
        cout << "El ultimo primo que aparece es " << ultimoPrimo << " en la posicion "<< posPrimo << endl;

        return 0;
    }
