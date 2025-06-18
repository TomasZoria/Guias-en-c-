#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");
        int consumo,total,x=1;

                cout << "Ingresar consumo: ";
                cin >> consumo;
        if (consumo<=100){
            total=consumo*10;
        }
        else {
            if(consumo<=200){
                total=(100*10)+((consumo-100)*12);
            }
            else{
                if(consumo>201){
                    total=(100*10)+(100*12)+((consumo-200)*15);
                }
            }
        }
        cout << "El total es: " << total << endl;;
        return 0;
    }
