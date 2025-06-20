#include <iostream>
using namespace std;


int main ()
{
    setlocale(LC_ALL, "spanish");

    int x,n,contador=0;
    bool esPrimo;

    cout << "Ingresar numero: ";
    cin >> n;

    for (x=1; x<=n; x++)
    {
        if (n % x == 0)
        {
            contador++;
        }
    }
    if (contador==2){
        esPrimo=true;
    }
    if (esPrimo){
    cout << "es primo";
    }
    else{
    cout << "no es primo";
    }
    return 0;
}
