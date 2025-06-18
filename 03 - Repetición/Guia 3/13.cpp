#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n,maximo;
        bool primero;

        for(int x=0;x<10;x++){
            cout << "Ingresar numero: ";
            cin >> n;
            if (!primero && n%2==0){
                maximo=n;
                primero=!primero;
            }
            if (n>maximo && n%2==0){
                maximo=n;
            }
        }
        cout << "El numero maximo par es " << maximo << endl;

        return 0;
    }
