#include <iostream>
using namespace std;

//Este es un programa que calculara el producto de tres numeros enteros
int main()
{
    // Declaracion de variables enteras
    int x=0; //Almacena valor 1
    int y=0; //Almacena valor 2
    int z=0; //Almacena valor
    int resultado=0;
    //Ingreso de datos por tectado del usuario
    cout <<"Ingrese 3 numeros enteros\n";
    cin>>x>>y>>z;
    //Operacion aritmetica
    resultado=x*y*z;
    //Impresion de Datos en pantalla
    cout<<"El producto es:"<<resultado<<endl;
    // Devolver el valor de main (ejecutado correctamente)
    return 0;

}
