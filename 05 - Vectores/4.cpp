#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

    int x,v[10],maximo=0,aux;

    cout << "ingresar 10 numeros: ";
    for(x=0; x<10; x++)
    {
        cin >> v[x];
    }
    cout << endl;
    aux=v[0];
    for (x=0; x<10; x++)
    {
        if (abs(v[x])>abs(aux)){
            maximo=v[x];
        }
    }
    cout << "el maximo es: " << maximo;
    return 0;
}
