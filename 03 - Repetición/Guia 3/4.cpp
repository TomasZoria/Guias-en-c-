#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int x,n;

        cout << "Ingresar numero: ";
        cin >> n;
        for(x=1;x<n;x++){
            cout << x << endl;
        }

        return 0;
    }
