#include <iostream>
using namespace std;


    int main (){

        int A,B,C,Total;
        float pA,pB,pC;

        cout << "Ingresar Datos" << endl;
        cin >> A >> B >> C;
        cout << endl << endl;

        Total = A+B+C;
        pA = ((float)A/(float)Total)*100;
        pB = ((float)B/(float)Total)*100;
        pC = ((float)C/(float)Total)*100;

        cout << "A " << pA << "%" << endl;
        cout << "B " << pB << "%" << endl;
        cout << "C " << pC << "%" << endl;


        return 0;
    }
