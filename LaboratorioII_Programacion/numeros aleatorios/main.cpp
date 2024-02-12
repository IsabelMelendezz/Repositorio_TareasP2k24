#include <iostream>
#include <cstdlib>

using namespace std;
 #define NUMERO_MAXIMO 100;
 #define NUMERO_MINIMO 0;
int main()
{
    int minimo= NUMERO_MINIMO;
    int maximo= NUMERO_MAXIMO;
    int aleatorio=0;
    aleatorio=minimo+rand();
    cout<<"Constante RAND_MAX:"<< RAND_MAX<<endl;
    //cout<<"maximo: "<< maximo<< "Minimo: "<< minimo;
    cout << "Numero aleatorio calculado:" << aleatorio<<endl;
    return 0;
}
