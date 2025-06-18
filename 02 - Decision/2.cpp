#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");


                int n1,n2,x=0;
        while(x == 0){
            cout << "Ingresar Numero: ";
            cin >> n1;
            cout << "Ingresar Numero: ";
            cin >> n2;

                if (n1 % n2 == 0){
                    cout << "Es multiplo";
                }
                else {
                    cout << "no es multiplo";
                }
                cout << endl;
        }

        return 0;
    }
