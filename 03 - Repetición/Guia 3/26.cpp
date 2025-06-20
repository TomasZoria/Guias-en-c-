#include <iostream>
using namespace std;


int main ()
{
    setlocale(LC_ALL, "spanish");
    int contador;

    for (int x=1; x<=10000; x++)
    {
        contador=0;
        for (int i=1; i<=x; i++)
        {
            if (x%i==0)
            {
                contador++;
            }
        }
        if (contador==2)
        {
            cout << x << endl;
        }

    }

    return 0;
}
