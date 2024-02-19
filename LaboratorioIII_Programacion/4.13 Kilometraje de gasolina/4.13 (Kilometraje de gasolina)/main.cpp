#include <iostream>

using namespace std;
float kmUsados,totalkm=0,kpl, totalkpl;
float litros, totalLitros=0;
int x=1;
int main()
{
    while (x!=-1){
    cout << "¡Bienvenido a nuestra calculadora de kilometrajes!" << endl;
    cout<< "Escriba los kilometros usados:"<<endl;
    cin>>kmUsados;
    totalkm=totalkm+kmUsados;
    cout<< "Escriba los litros:"<<endl;
    cin>>litros;
    totalLitros=totalLitros+litros;
    kpl=kmUsados/litros;
    cout<<"KPL en este reabastecimiento:"<<kpl<<endl;
    totalkpl=totalkm/totalLitros;
    cout<<"Total KPL:"<<totalkpl<<endl;
    cout<<"¿Desea continuar? (-1= NO | 0= SI)"<<endl;
    cin>>x;
    }

    return 0;
}
