#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,n,contador=0,primerImpar,segundoImpar,anteImpar,ultimoImpar,aux;

        for(x=0;x<7;x++){
        cout << "Ingresar numero: ";
        cin >> n;
            if (n%2!=0 && contador==0){
                primerImpar=n;
                contador++;
            }
            else {
                if (n%2!=0 && contador==1){
                    segundoImpar=n;
                    contador++;
                }
            }
            if (n%2!=0){
            anteImpar=ultimoImpar;
            ultimoImpar=n;
            }
        }
        cout << "Primer impar " << primerImpar << endl;
        cout << "Segundo impar " << segundoImpar << endl;
        cout << "Anteultimo impar " << anteImpar << endl;
        cout << "Ultimo impar " << ultimoImpar << endl;

        return 0;
    }
