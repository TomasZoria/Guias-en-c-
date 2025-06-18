#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int a,b,c,x=1;

        cout << "ingresar la longitud de los 3 lados: ";
        cin >> a >> b >> c;

        if (a==b && b==c){
            cout << "Triangulo Equilátero" << endl;
        }
        else {
            if (a==b || b==c || a==c){
                cout << "Triangulo Isósceles" << endl;
            }
            else {
                cout << "Triangulo Escaleno" << endl;
            }
        }

        return 0;
    }
