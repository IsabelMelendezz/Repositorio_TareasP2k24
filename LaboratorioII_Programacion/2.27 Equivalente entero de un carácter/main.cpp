#include <iostream>
using namespace std;
//Este es un programa que hace la conversion de un caracter a su equivalente en la tabla ASCII
int main()
{
    char valor;
    cout<<"---Bienvenido----\n";
    cout<<"Ingrese el caracter que desea convertir a su equivalente en ASCII:\n";
    cin>>valor;
    cout <<"Su valor en ASCII es :"<<static_cast< int >(valor);

    return 0;
}
