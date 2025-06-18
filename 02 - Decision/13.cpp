#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int a,b,c,aux;

        cout <<  "Ingresar 3 números";
        cin >> a >> b >> c;

cout << "Numeros desordenados: " << a << " - " << b << " - " << c << endl;
        if (b<a){
            aux=a;
            a=b;
            b=aux;
        }
            if (c<a){
                aux=a;
                a=c;
                c=aux;
            }

        if (c<b){
            aux=b;
            b=c;
            c=aux;
        }
cout << "Numeros ordenados: " << a << " - " << b << " - " << c << endl;
        return 0;
    }
