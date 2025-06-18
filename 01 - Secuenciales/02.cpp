#include <iostream>
using namespace std;


    int main (){

        int N1,N2,N3;

        cout << "Ingresar Numeros" << endl;
        cin >> N1 >> N2;

        N3=N1;
        N1=N2;
        N2=N3;

        cout << "Numero Uno: " << N1 << endl;
        cout << "Numero Dos: " << N2 << endl;


        return 0;
    }
