#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

            int Numero,x=0;
        //while(x == 0){
            cout << "Ingresar Numero: ";
            cin >> Numero;

                if (Numero == 0){
                    cout << "es 0";
                }
                else {
                    if (Numero > 0){
                        cout << "Es positivo";
                    }
                    else {
                        cout << "Es negativo";
                    }
                }
                cout << endl;
       // }
        return 0;
    }
