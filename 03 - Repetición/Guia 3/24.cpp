#include <iostream>
using namespace std;


int main ()
{
    setlocale(LC_ALL, "spanish");

    int x,mayorA50=0;
    float sueldo,maximo=0,minimo,promedio=0;

    for (x=0; x<10; x++)
    {
        cout << "Ingresar sueldo: ";
        cin >> sueldo;
        if(x==0 || sueldo>maximo)
        {
            maximo=sueldo;
        }

        if (x==0 || sueldo<minimo)
        {
            minimo=sueldo;
        }

        promedio+=sueldo;
        if (sueldo>50000)
        {
            mayorA50++;
        }
    }
    promedio=promedio/10;
    cout << "El maximo de los sueldos es $" << maximo << endl;
    cout << "El minimo de los sueldos es $" << minimo << endl;
    cout << "El promedio de los sueldos es $" << promedio << endl;
    cout << "Los sueldos mayores a $50000 son " << mayorA50 << endl;

    return 0;
}
