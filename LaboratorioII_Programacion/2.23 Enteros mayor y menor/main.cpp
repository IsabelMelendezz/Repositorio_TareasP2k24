#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int mayor, menor;

    // Obtener input del usuario
    cout <<"Ingrese cinco numeros enteros:\n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Inicializar mayor y menor con el primer número ingresado
    mayor = menor = num1;

    // Comparar para encontrar el mayor y el menor
    if (num2 > mayor)
        mayor = num2;
    if (num2 < menor)
        menor = num2;

    if (num3 > mayor)
        mayor = num3;
    if (num3 < menor)
        menor = num3;

    if (num4 > mayor)
        mayor = num4;
    if (num4 < menor)
        menor = num4;

    if (num5 > mayor)
        mayor = num5;
    if (num5 < menor)
        menor = num5;

    // Imprimir resultados en pantalla
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;

    return 0;
}
