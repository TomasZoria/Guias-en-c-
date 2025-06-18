#include <iostream>
using namespace std;


    int main (){
    setlocale(LC_ALL, "spanish");

        int edad,mayores30=0,mayorAltura=0,edadPar=0,alturaMayor=0;
        float altura,promedioMayor30=0;

        cout << "Ingresar edad y altura: ";
        cin >> edad >> altura;
            if(edad>30){
                mayores30++;
                if(altura>=1.8){
                    mayorAltura++;
                }
                promedioMayor30+=altura;
            }
            if(altura>=1.7 && altura<=1.8){
                alturaMayor++;
            }
            if (edad==20 || edad==30 || edad==40){
                edadPar++;
            }
            cout << "Ingresar edad y altura: ";
        cin >> edad >> altura;
            if(edad>30){
                mayores30++;
                if(altura>=1.8){
                    mayorAltura++;
                }
                promedioMayor30+=altura;
            }
            if(altura>=1.7 && altura<=1.8){
                alturaMayor++;
            }
            if (edad==20 || edad==30 || edad==40){
                edadPar++;
            }
            cout << "Ingresar edad y altura: ";
        cin >> edad >> altura;
            if(edad>30){
                mayores30++;
                if(altura>=1.8){
                    mayorAltura++;
                }
                promedioMayor30+=altura;
            }
            if(altura>=1.7 && altura<=1.8){
                alturaMayor++;
            }
            if (edad==20 || edad==30 || edad==40){
                edadPar++;
            }
            cout << "Ingresar edad y altura: ";
        cin >> edad >> altura;
            if(edad>30){
                mayores30++;
                if(altura>=1.8){
                    mayorAltura++;
                }
                promedioMayor30+=altura;
            }
            if(altura>=1.7 && altura<=1.8){
                alturaMayor++;
            }
            if (edad==20 || edad==30 || edad==40){
                edadPar++;
            }
            cout << "Ingresar edad y altura: ";
        cin >> edad >> altura;
            if(edad>30){
                mayores30++;
                if(altura>=1.8){
                    mayorAltura++;
                }
                promedioMayor30+=altura;
            }
            if(altura>=1.7 && altura<=1.8){
                alturaMayor++;
            }
            if (edad==20 || edad==30 || edad==40){
                edadPar++;
            }
            promedioMayor30=promedioMayor30/mayores30;
            cout << "La cantidad de personas mayores a 30 años que midan más de 1.8 metros es: " << mayorAltura << endl;
            cout << "El promedio de altura de las personas mayores a 30 años es: " << promedioMayor30 << endl;
            cout << "La cantidad de personas con altura entre 1.7 y 1.8 es: " << alturaMayor << endl;
            cout << "La cantidad de personas cuya edad sea de 20, 30 o 40 años es: " << edadPar << endl;

        return 0;
    }
