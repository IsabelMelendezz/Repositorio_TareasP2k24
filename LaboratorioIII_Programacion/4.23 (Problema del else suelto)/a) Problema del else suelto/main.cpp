#include <iostream>
using namespace std;
//programa corregido
int main()
 {
    int x=11;
    int y=9;
    if ( x < 10 ){//apertura del primer if (compuesto)

        if ( y > 10 ){   //apertura del if simple
            cout << "*****" << endl;
        }//cierre del if simple

    else{  //else asociado al primer if (compuesto)
        cout << "#####" << endl;
    }//cierre del else

    }//cierre del if compuesto
    cout << "$$$$$" << endl;

return 0;
}
