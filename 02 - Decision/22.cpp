#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        const int alquiler=10000,costoMantenimiento=5000;
        const float costoCaramelo=2.50;
        int caramelos,caramelosCosto;
        float presupuestoInicial,presupuesto;

        cout << "Ingresar el presupuesto y cuantos caramelos se van a producir: ";
        cin >> presupuestoInicial >> caramelos;
        presupuesto=presupuestoInicial;

        presupuesto=presupuesto-(float)alquiler;
        presupuesto=presupuesto-((float)caramelos*costoCaramelo);
        if (caramelos<=100){
            presupuesto=presupuesto-costoMantenimiento;
        }
        else {
            caramelosCosto=caramelos/100;
            if(caramelos%100!=0){
                caramelosCosto++;
            }
            presupuesto=presupuesto-(caramelosCosto*costoMantenimiento);
        }
        if(presupuesto<0){
            cout << "El presupuesto no es suficiente, necesita un credito de $" << -presupuesto << endl;
        }
        else{
            cout << "El presupuesto es suficiente para cubrir los costos de $" << presupuestoInicial-presupuesto << endl;
        }

        return 0;
    }
