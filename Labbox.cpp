/*
Christopher Rivera Madera
801248062
Lab: Box office
-Presentación de entrada y salida interactiva(clase CCOM-Cap 3)
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
    
    //Desplegar el propósito del programa
    cout<<"\nEste programa va a calcular el beneficio bruto y neto de taquilla y el beneficio del distribuidor de una pelicula que se proyecta en el cine.\n"<<endl;

    //pide al usuario ingresar el nombre de la película
    cout<<"Ingrese el nombre de la película: ";
    string nom_movie; //Declaración de variable tipo string
    getline(cin,nom_movie);//Lee la línea completa incluyendo los espacios en blanco y almacena en la variable

    //Pide al usuario ingresar el número de taquillas de adulto vendidas
    cout<<"Ingrese la cantidad de taquillas de adultos vendidas: ";
    int adul_taquillas; //Declaración de la variable tipo int
    cin>>adul_taquillas;// Lee el valor introducido por el usuario y lo almacena en la variable adul_taquillas

    //Pide al usuarion ingresar el número de taquillas de niños vendidas
    cout<<"Ingrese la cantidad de taquillas de niños vendidas: ";
    int ninos_taqui; //Declaración de variable tipo int
    cin>>ninos_taqui; //  Lee el valor introducido por el usuario y lo almacena en la variable ninos_taqui


    //Declaracion de constantes
    const double precio_adulto= 10.00;
    const double precio_ninos= 6.00;
    const double porciento_cine= 0.20;

    //Fórmulas para obtener los distintos datos pedidos por el programa
    double ganancia_bruta=(adul_taquillas* precio_adulto) + (ninos_taqui* precio_ninos);
    double ganancia_neta= ganancia_bruta * porciento_cine;
    double pago_distribuidor = ganancia_bruta - ganancia_neta;

    //Despliega el nombre de la pelicula ingresado por el usuario entre comillas
    cout<<left<<setw(51)<<"\n""Nombre de película:"<<"\""<<nom_movie<<"\""<<"\n";

    //Despliegan las cantidades de taquillas ingresadas por el usuario anteriormente
    cout<<setw(51)<<"Cantidad de taquillas de adulto vendidas:"<<adul_taquillas<<endl;
    cout<<setw(52)<<"Cantidad de taquillas de niños vendidas:"<<ninos_taqui<<endl;

    //Despliegan los distintos calculos que el progrma exige como propósito
    cout<<setw(49)<<setprecision(2)<<fixed<<"Ganancia bruta de taquilla:"<<setw(3)<<"$"<<setw(8)<<ganancia_bruta<<endl;
    cout<<setw(49)<<setprecision(2)<<fixed<<"Ganancia neta de taquilla:"<<setw(4)<<"$"<<setw(8)<<ganancia_neta<<endl;
    cout<<setw(49)<<setprecision(2)<<fixed<<"Pago realizado al distribuidor:"<<setw(3)<<"$"<<setw(8)<<pago_distribuidor<<endl;


    return 0;
}
