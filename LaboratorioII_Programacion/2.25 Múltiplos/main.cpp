#include <iostream>
using namespace std;
//2.25 (Múltiplos) Escriba un programa que lea dos enteros, determine e imprima
//si el primero es múltiplo del segundo.
int main() {
    int valor1,valor2=0;
    int multiplo=0;

    // Obtener la entrada de datos por el usuario
    cout <<"Ingrese 2 numeros enteros:\n";
    cin >> valor1 >>valor2;

    //Proceso logico e impresion de datos
    multiplo=valor1%valor2; //Mod (%) devuelve el residuo de la division
    if (multiplo==0){
        cout << "El numero " << valor1 <<" SI es multiplo de "<<valor2<< endl;
    }
    else{
        cout << "El numero " << valor1 <<" NO es multiplo de "<<valor2<< endl;
    }
    return 0;
}
