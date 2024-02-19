#include <iostream>

using namespace std;

int main() {
    long binario;
    int decimal = 0, base = 1, resto,x=0;
    while (x!=1){

    // Solicitar el número binario al usuario
    cout << "Ingrese un número binario: ";
    cin >> binario;

    // Convertir el número binario a decimal
    while (binario > 0) {
        resto = binario % 10;
        decimal += resto * base;
        binario= binario/10;
        base=base*2;
    }
    // Imprimir el resultado
    cout << "El equivalente decimal es: " << decimal << endl;
    cout<<"Desea realizar otra conversion? 0=SI | 1=NO"<<endl;
    cin>>x;
    }


    return 0;
}
