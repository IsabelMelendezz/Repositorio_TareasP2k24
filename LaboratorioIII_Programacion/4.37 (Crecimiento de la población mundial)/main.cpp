#include <iostream>

using namespace std;

int main() {
    double tasa = 1.05;
    double poblacion_actual = 8000; // millones
    double nueva_poblacion = 0;
    double aumento_poblacion = 0;
    int anio =2023;
    double poblacion_doble = 0;
    int anio_poblacion_doble = 0;

    nueva_poblacion = poblacion_actual;

    cout << "Year" << "\t" << "Poblacion mundial anticipada" << "\t" << "Aumento según tasa de crecimiento global (%)" << endl;
    cout << "\t\t" << "En millones" << endl;

    for (int x = 1; x <= 75; x++) {
        aumento_poblacion = nueva_poblacion * (tasa / 100);
        nueva_poblacion += aumento_poblacion;
        cout << anio++ << "\t\t" << nueva_poblacion << "\t\t\t\t" << aumento_poblacion << "%" << endl;

        poblacion_doble=(nueva_poblacion/poblacion_actual);
        if (poblacion_doble>=2){
            anio_poblacion_doble=anio;
            break;
        }
        }
    cout << "El year en que la poblacion sera el doble sera: " << anio_poblacion_doble << endl;

    return 0;
}
