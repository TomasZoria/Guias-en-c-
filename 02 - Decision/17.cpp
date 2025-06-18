#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int n,n2;
        bool orden=true;
        cout << "Ingresar numero: ";
        cin >> n;
        n2=n;
        if (n<n2){
            orden=!orden;
        }
        cout << "Ingresar numero: ";
        cin >> n;
        if (n<n2){
            orden=!orden;
        }
        n2=n;
        cout << "Ingresar numero: ";
        cin >> n;
        if (n<n2){
            orden=!orden;
        }
        n2=n;
        cout << "Ingresar numero: ";
        cin >> n;
        if (n<n2){
            orden=!orden;
        }
        n2=n;

        if (orden){
            cout << "conjunto ordenado" << endl;
        }
        else {
            cout << "conjunto desordenado" << endl;
        }

        return 0;
    }
