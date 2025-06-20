    #include <iostream>
    using namespace std;


    int main ()
    {
        setlocale(LC_ALL, "spanish");

        int x,n,divisores=0;

    cout << "Ingresar numero: ";
    cin >> n;

    for (x=1; x<=n; x++)
    {
        if (n % x == 0)
        {
            divisores++;
        }
    }
    cout << "La cantidad de divisores de " << n << " es " << divisores << endl;
        return 0;
    }
