#include <iostream>
using namespace std;


    int main (){

        float asientosOcupados,asientosTotales,porcentajeOcupado,porcentajeDesocupado;

        cout << "Ingresar Asientos totales y asientos Ocupados" << endl;
        cin >> asientosTotales >> asientosOcupados;
        cout << endl << endl;
        porcentajeOcupado = (asientosOcupados/asientosTotales)*100;
        porcentajeDesocupado =100 - porcentajeOcupado;

        cout << "Se ocuparon el " << porcentajeOcupado << "% de los pasajes y quedaron desocupados el " << porcentajeDesocupado << "% de los pasajes";

        return 0;
    }
