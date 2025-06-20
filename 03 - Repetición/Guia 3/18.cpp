#include <iostream>
using namespace std;


int main ()
{
    setlocale(LC_ALL, "spanish");

    int x,n;

    cout << "Ingresar numero: ";
    cin >> n;

    for (x=1; x<=n; x++)
    {
        if (n % x == 0 && x%2==0)
        {
            if(x==n){
                cout << x << endl;
            }
            else{
                cout << x << ",";
            }
        }
    }

    return 0;
}
