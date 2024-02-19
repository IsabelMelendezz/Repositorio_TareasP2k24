#include <iostream>

using namespace std;
int contador=1;
int numero=0;
int mayor=0;

int main()
{
    while (contador<=10){
    cout << "Ingrese su numero " <<contador++<<":"<<endl;
    cin>>numero;
    if (numero>mayor){
        mayor=numero;
    }

    }
    cout<<"El numero mayor es: "<<mayor;
    return 0;
}
