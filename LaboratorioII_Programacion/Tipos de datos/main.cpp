#include <iostream>

using namespace std;
// Este programa tiene como objetivo mostrar los diferentes tipos de variables en c++
// Rangors diferentes tipos de variables (plataformas 64 bits)
// int 4 bytes  -2,147,483,648 a 2,147,483,648
int main()
{
    int dia;
    int mes;
    int anio=1999;
    //inicializacion de variables enteras
    dia=3;
    mes = 2;
    // Impresion de valores
    cout<<"Naci el: \n";
    cout<<"Dia:"<<dia<<endl;
    cout<<"Del mes: " << mes <<endl;
    cout<<"El anio " <<anio<<endl;

    //variables boolenas
    bool estoy_hambriento=true;
    cout<<"Tienes hambre? "<<estoy_hambriento<<endl;

    // tipo float
    float pi=3.1416;
    cout<<"El valor de PI es : "<< pi<<endl;
    // tipo caracter
    char primerCaracter='h';
    char SegundoCaracter='o';
    char tercerCaracter='l';
    char cuartoCaracter='a';
    cout<<primerCaracter<<SegundoCaracter<<tercerCaracter<<cuartoCaracter;




    return 0;
}
