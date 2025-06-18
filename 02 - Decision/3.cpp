#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

            int Numero=1;

            do{
            cout << "Ingresar Numero: ";
            cin >> Numero;

                if (Numero % 2 == 0){
                    cout << "es par";
                }
                else {
                    cout << "Es impar";
                }
                cout << endl;
        }
        while(Numero != 0);


        return 0;
    }
