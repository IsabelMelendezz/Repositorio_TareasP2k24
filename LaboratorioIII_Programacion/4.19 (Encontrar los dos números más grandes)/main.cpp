#include <iostream>

using namespace std;
int contador=1;
int numero=0;
int mayor=0;
int mayor2=0;
int main()
{
    while (contador<=10){
    cout << "Ingrese su numero " <<contador++<<":"<<endl;
    cin>>numero;
    if (numero>mayor){
        mayor2=mayor;
        mayor=numero;

    }
    else if (numero>mayor2){
        mayor2=numero;
    }

    }
    cout<<"Los numeros mayores del rango son: "<<mayor<<" y "<<mayor2;
    return 0;
}

