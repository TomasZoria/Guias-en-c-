#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n1,n2,diferenciaAbsoluta=1;
    while (diferenciaAbsoluta!=0){
        cout << "ingresar 2 numeros" << endl;
        cin >> n1 >> n2;

        if (n1>n2){
            diferenciaAbsoluta=n1-n2;
        }
        else {
            diferenciaAbsoluta=n2-n1;
        }
        cout << diferenciaAbsoluta << endl;

    }

        return 0;
    }
