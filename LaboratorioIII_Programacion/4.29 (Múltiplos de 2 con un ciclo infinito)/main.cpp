#include <iostream>
#include <math.h>
using namespace std;
int x=1;
int numero=2, elevado=0;
int main()
{
    while(x>0){
        elevado = pow(numero, x);
        cout <<elevado<< endl;
        x++;
    }
                /* Lo que ocurre al ejecutar este programa es un ciclo infinito
                pues la condicion del while siempre sera TRUE ya que todos los valores
                que pasen por ella seran mayores a 0,
                no hay alguna otra instruccion que lo detenga*/
    return 0;
}
