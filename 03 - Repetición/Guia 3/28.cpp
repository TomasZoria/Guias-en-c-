#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int dia,x,contadorExt=0,contadorDep=0,diaMayorDeposito,movimientoMayorDeposito,contadorDia10=0;
        float importe,saldoCuenta,mayorDeposito;
        char tipo;
        bool primerDeposito;

         for (x=1;x<=14;x++){
            cout << "Ingresar dia: ";
            cin >> dia;
            cout << "Depositar('D') o Extraer('E')?";
            cin >> tipo;
            tipo=toupper(tipo);
            cout << "Ingresar el importe: ";
            cin >> importe;

            if (tipo=='D'){
                saldoCuenta+=importe;
                contadorDep++;
            }
            else{
                saldoCuenta-=importe;
                contadorExt++;
            }
            if (primerDeposito==false || importe>mayorDeposito){
                mayorDeposito=importe;
                diaMayorDeposito=dia;
                movimientoMayorDeposito=x;
                primerDeposito=true;
            }
            if (dia==10){
                contadorDia10++;
            }

         }
         cout << "El saldo de la cuenta es: $" << saldoCuenta << endl;
         cout << "El porcentaje de extraccion fue de un " << (float)((contadorExt*100)/14) << "% y el de deposito fue de un " <<(float)((contadorDep*100)/14) << "%" << endl;
         cout << "El mayor deposito fue de: $" << mayorDeposito << " en el dia " << diaMayorDeposito << " con movimiento numero " << movimientoMayorDeposito << endl;
         cout << "El dia 10 tuvo " << contadorDia10 << " movimientos" << endl;

        return 0;
    }
