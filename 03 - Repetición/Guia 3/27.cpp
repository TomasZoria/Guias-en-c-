#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int dia,diaMax,contadorNeblina=0,contadorLluvia=0;
        float temperatura,lluvia,visibilidad,tempMax,tempMinima;

        for (int x=1;x<=15;x++){
            cout << "Ingresar dia,temperatura,milimetros de lluvia y visibilidad por km ";
            cin >> dia >> temperatura >> lluvia >> visibilidad;

            if (x==1 || temperatura>tempMax){
                diaMax=dia;
                tempMax=temperatura;
            }
            if (x==1 || temperatura<tempMinima){
                tempMinima=temperatura;
            }
            if (visibilidad<2){
                contadorNeblina++;
            }
            if(lluvia>0){
                contadorLluvia++;
            }

        }
        cout << "El dia con mayor temperatura fue: " << diaMax << endl;
        cout << "La amplitud termica fue de: " << (tempMax-tempMinima) << "°C" <<endl;
        cout << "La cantidad de dias con neblina fue de: " << contadorNeblina << endl;
        if (contadorLluvia>=5){
            if (contadorLluvia>=8){
                cout << "Fue una quincena lluviosa" << endl;
            }
        else{
            cout << "Fue una quincena humeda" << endl;
        }
        }
        else{
            cout << "Fue una quincena seca" << endl;
        }



        return 0;
    }
