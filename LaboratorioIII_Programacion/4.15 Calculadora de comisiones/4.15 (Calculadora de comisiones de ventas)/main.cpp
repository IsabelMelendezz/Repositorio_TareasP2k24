#include <iostream>

using namespace std;
int salario=200;
float bono,ventas,salarioRecibir;
int x=1;
int main()
{
    while (x!= -1)
    {
        cout << "Introduzca las ventas en dolares : " << endl;
        cin>>ventas;
        salarioRecibir=salario+(ventas*0.09);
        cout<<"El salario es: $"<<salarioRecibir<<endl;
        cout<<"¿Desea continuar? (-1= NO | 0= SI)"<<endl;
        cin>>x;
    }

    return 0;
}
