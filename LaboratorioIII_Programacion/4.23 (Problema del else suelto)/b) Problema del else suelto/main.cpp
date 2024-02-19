#include <iostream>
using namespace std;

int main()
 {
    int x=11;
    int y=9;
    if ( x < 10 )
    {//apertura del if compuesto en la parte V
        if ( y > 10 ){// apertura del if simple
        cout << "*****" << endl;
        }//cierre del if simple
    }//cierre del if compuesto
    else
        {   //apertura del else que pertenece al primer if
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        } //cierre del else

return 0;
}
