#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int blancas=45,negras=50,marrones=40,grises=49,cantidad,cantidadVendida=0;
        char tipo;
        bool bBlancas=0,bNegras=0,bMarrones=0,bGrises=0;

            cout << "Ingresar la cantidad de carteras vendidas: ";
            cin >> cantidad;
            cout << "Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris): ";
            cin >> tipo;

            cantidadVendida+=cantidad;
            if(tipo=='1'){
                blancas=blancas-cantidad;
                bBlancas=true;
            }
            if(tipo=='2'){
                negras=negras-cantidad;
                bNegras=true;
            }
            if(tipo=='3'){
                marrones=marrones-cantidad;
                bMarrones=true;
            }
            if(tipo=='4'){
                grises=grises-cantidad;
                bGrises=true;
            }
            cout << "Ingresar la cantidad de carteras vendidas: ";
            cin >> cantidad;
            cout << "Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris): ";
            cin >> tipo;

            cantidadVendida+=cantidad;
            if(tipo=='1'){
                blancas=blancas-cantidad;
                bBlancas=true;
            }
            if(tipo=='2'){
                negras=negras-cantidad;
                bNegras=true;
            }
            if(tipo=='3'){
                marrones=marrones-cantidad;
                bMarrones=true;
            }
            if(tipo=='4'){
                grises=grises-cantidad;
                bGrises=true;
            }
            cout << "Ingresar la cantidad de carteras vendidas: ";
            cin >> cantidad;
            cout << "Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris): ";
            cin >> tipo;

            cantidadVendida+=cantidad;
            if(tipo=='1'){
                blancas=blancas-cantidad;
                bBlancas=true;
            }
            if(tipo=='2'){
                negras=negras-cantidad;
                bNegras=true;
            }
            if(tipo=='3'){
                marrones=marrones-cantidad;
                bMarrones=true;
            }
            if(tipo=='4'){
                grises=grises-cantidad;
                bGrises=true;
            }

            cout << "En total se vendieron: " << cantidadVendida << " carteras" << endl;
            cout << "Quedaron en stock: " << blancas << " carteras blancas" << endl;
            cout << negras << " carteras negras" << endl;
            cout << marrones << " carteras marrones" << endl;
            cout << grises << " carteras grises" << endl;

            if (!bBlancas){
                cout << "No se vendieron carteras blancas" << endl;
            }
            if (!bNegras){
                cout << "No se vendieron carteras negras" << endl;
            }
            if (!bMarrones){
                cout << "No se vendieron carteras marrones" << endl;
            }
            if (!bGrises){
                cout << "No se vendieron carteras grises" << endl;
            }


        return 0;
    }
