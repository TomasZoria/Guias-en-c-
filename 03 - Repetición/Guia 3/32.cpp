#include <iostream>
using namespace std;


int main ()
{
    setlocale(LC_ALL, "spanish");

    int x,nAnterior,n;
    bool orden=true;

    for (x=0; x<10; x++)
    {
        cout << "Ingresar numero: ";
        cin >> n;
        if (orden && x!=0)
        {
            if (n%2==0 && nAnterior%2!=0)
            {
            }
            else
            {
                if (n%2!=0 && nAnterior%2==0){

                }
                else{
                        orden=false;
            }
            }
        }
        nAnterior=n;
    }
    if (orden){
        cout << "Alternados" << endl;
    }
    else {
        cout << "No alternados" << endl;
    }
    return 0;
}
