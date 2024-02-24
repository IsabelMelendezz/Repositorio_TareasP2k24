//insertar librerias
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Función para generar un número aleatorio entre 0 y 10
int generarGoles() {
    return rand() % 11;
}

// Función para imprimir la tabla de posiciones
void imprimirTabla(string equipos[], int partidosJugados[], int partidosGanados[], int partidosPerdidos[], int partidosEmpatados[]) {
    cout << "Tabla de POSICIONES:" << endl;
    cout << setfill('-') << setw(80) << "-" << endl;
    cout << setfill(' ');
    cout << left << setw(15) << "| Equipo" << setw(15) << "| JUGADOS" << setw(15) << "| GANADOS" << setw(15) << "| PERDIDOS" << setw(15) << "| Empatados" << setw(15) << "| Puntos |" << endl;
    cout << setfill('-') << setw(80) << "-" << endl;
    cout << setfill(' ');
    for (int i = 0; i < 6; i++) {
        int puntos = partidosGanados[i] * 3 + partidosEmpatados[i];
        cout << left << setw(15) << "| " + equipos[i] << setw(15) << "| " + to_string(partidosJugados[i]) << setw(15) << "| " + to_string(partidosGanados[i]) << setw(15) << "| " + to_string(partidosPerdidos[i]) << setw(15) << "| " + to_string(partidosEmpatados[i]) << setw(15) << "| " + to_string(puntos) + " |" << endl;
        cout << setfill('-') << setw(80) << "-" << endl;
        cout << setfill(' ');
    }
}

// Función para imprimir la tabla de resultados de los partidos
void imprimirTablaResultados(string equipos[], int resultados[6][6]) {
    cout << "Tabla de RESULTADOS de los Partidos:" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    cout << left << setw(15) << "| Equipo" << setw(15) << "| Equipo" << setw(20) << "| Resultado |" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            cout << left << setw(15) << "| " + equipos[i] << setw(15) << "| " + equipos[j] << setw(20);
            if (resultados[i][j] == -1) {
                cout << "| Empate |" << endl;
            } else {
                cout << "| " + to_string(resultados[i][j]) + "-" + to_string(resultados[j][i]) + " |" << endl;
            }
        }
    }
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
}

int main() {
    // Genera números aleatorios
    srand(time(0));

    // Arreglos para almacenar la información de los equipos
    string equipos[6];
    int partidosJugados[6] = {0};
    int partidosGanados[6] = {0};
    int partidosPerdidos[6] = {0};
    int partidosEmpatados[6] = {0};

    // Arreglo para almacenar los resultados de los partidos
    int resultados[6][6] = {0};

    // Ingreso de nombres de los equipos
    cout << "Ingrese los nombres de los 6 equipos:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Equipo " << i + 1 << ": ";
        cin >> equipos[i];
    }

    // Generación de partidos y actualización de la tabla de posiciones
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            int golesEquipo1 = generarGoles();
            int golesEquipo2 = generarGoles();
            resultados[i][j] = golesEquipo1;
            resultados[j][i] = golesEquipo2;
            partidosJugados[i]++;
            partidosJugados[j]++;
            if (golesEquipo1 > golesEquipo2) {
                partidosGanados[i]++;
                partidosPerdidos[j]++;
            } else if (golesEquipo1 < golesEquipo2) {
                partidosGanados[j]++;
                partidosPerdidos[i]++;
            } else {
                partidosEmpatados[i]++;
                partidosEmpatados[j]++;
            }
        }
    }

    // Impresión de la tabla de posiciones
    imprimirTabla(equipos, partidosJugados, partidosGanados, partidosPerdidos, partidosEmpatados);

    // Impresión de la tabla de resultados de los partidos
    imprimirTablaResultados(equipos, resultados);

    // Cálculo del equipo ganador y del equipo que baja de categoría
    int maxPuntos = 0;
    int equipoGanador = -1;
    int minPuntos = 1000;
    int equipoBaja = -1;
    for (int i = 0; i < 6; i++) {
        int puntos = partidosGanados[i] * 3 + partidosEmpatados[i];
        if (puntos > maxPuntos) {
            maxPuntos = puntos;
            equipoGanador = i;
        }
        if (puntos < minPuntos) {
            minPuntos = puntos;
            equipoBaja = i;
        }
    }

    cout << "El equipo GANADOR es: " << equipos[equipoGanador] << endl;
    cout << "El equipo que BAJA CATEGORIA es: " << equipos[equipoBaja] << endl;

    // Preguntar al usuario si desea volver a generar o calcular otro campeonato
    char respuesta;
    cout << "¿Desea volver a GENERAR o CALCULAR otro campeonato? (s/n): ";
    cin >> respuesta;
    if (respuesta == 's' || respuesta == 'S') {
        // Limpieza
        for (int i = 0; i < 6; i++) {
            partidosJugados[i] = 0;
            partidosGanados[i] = 0;
            partidosPerdidos[i] = 0;
            partidosEmpatados[i] = 0;
            for (int j = 0; j < 6; j++) {
                resultados[i][j] = 0;
            }
        }
        // Volver a generar el campeonato
        main();
    }

    return 0;
}
