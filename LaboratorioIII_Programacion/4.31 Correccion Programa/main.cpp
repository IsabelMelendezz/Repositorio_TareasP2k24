#include <iostream>

using namespace std;

int main()
{
    int x=5,y=4,suma=0;
    /*4.31 ¿Qué está mal con la siguiente instrucción? Proporcione la instrucción correcta para
     realizar lo que probablemente el programador trataba de hacer.cout << ++( x + y );
     Lo que el programador intentaba hacer era preincrementar el resultado de la suma, sin embargo
     el operador de preincremento necesita una variable para operar directamente, pero (x + y) no es una variable*/
    //correccion
    suma=x+y; //asignamos (x+y) a la variable suma
    cout<< ++suma; //ahora si podemos usar el operador preincremento ya que suma si es una VARIABLE y no una operacion
    return 0;
}
