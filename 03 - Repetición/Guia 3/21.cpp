#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,n,sumaPerfecto=0;

        cout << "Ingresar numero: ";
        cin >> n;

        for (x=1;x<=n-1;x++){
            if (n%x==0){
                sumaPerfecto+=x;
            }
        }
        if (sumaPerfecto==n){
            cout << "El numero es perfecto"<< endl;
        }
        else {
            cout <<  "El numero no es perfecto" << endl;
        }

        return 0;
    }
