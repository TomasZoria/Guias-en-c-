#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int maxRacha,contadorRacha=0,x,minutosJugados,amarillas,roja,goles,contadorNoJugados=0,contadorPartidoCompleto=0,contadorTarjetas=0,cantidadGoles,maxGoles;
        bool primerGol;

        for(x=1;x<=19;x++){
            cout << "Ingresar los minutos juados,las tarjetas amarillas, rojas y los goles";
            cin >> minutosJugados >> amarillas >> roja >> goles;

            if (minutosJugados==0){
                contadorNoJugados++;
            }
            else{
                if (minutosJugados>=90){
                    contadorPartidoCompleto++;
                }
            }
            if (primerGol==false || goles>cantidadGoles){
                cantidadGoles=goles;
                maxGoles=x;
                primerGol=true;
            }
            if (goles>0){
                contadorRacha++;
                maxRacha=contadorRacha;
            }
            else{
                contadorRacha=0;
            }
            contadorTarjetas+=amarillas+roja;
        }
        cout <<endl;
        cout << "La cantidad de partidos no jugados fue de: " << contadorNoJugados << endl;
        cout << "La cantidad de partidos completos fue de: " << contadorPartidoCompleto << endl;
        cout << "El promedio de tarjetas sacadas fue de: " << (float)((float)contadorTarjetas/19) << endl;
        cout << "La mayor cantidad de goles en un partido fue de: " << cantidadGoles << " en el partido numero " << maxGoles << endl;
        cout << "La cantidad de partidos consecutivos con goles anotados fue de: " << maxRacha << endl;




        return 0;
    }
