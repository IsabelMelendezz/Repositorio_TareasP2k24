#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define NUMERO_CANDIDATOS 5
#define NUMERO_VOTANTES 50
#define NUMERO_RONDAS 5
#define MINIMO_VOTOS 0
#define MAXIMA_LONGITUD_CADENA 100
#define NUMERO_NOTAS NUMERO_RONDAS

void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1], char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA]);

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    llamaCiclo();
    return 0;
}

void llamaCiclo()
{
    float matriz_ronda1[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1];
    float matriz_ronda2[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1];
    float matriz_ronda3[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1];
    float matriz_ronda4[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1];
    float matriz_ronda5[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1];

    char opcion;
    bool repetir = true;

    char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA] = {"Luis", "Carlos", "Andre", "Juan", "Jonathan"};
    do
    {
        llenarMatriz(matriz_ronda1);
        imprimirMatriz(matriz_ronda1, candidatos);

        system("clear");
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir = false;
        }
    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_CANDIDATOS; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_NOTAS; x++)
        {
            int calificacion = busquedaAleatorios(MINIMO_VOTOS, 50);
            suma += static_cast<float>(calificacion);
            matriz[y][x] = static_cast<float>(calificacion);
        }

        matriz[y][NUMERO_NOTAS] = suma;
    }
}

void imprimirMatrizLinea()
{
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_NOTAS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

void imprimirMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_NOTAS + 1], char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;

    char candidatoVotoMayor[MAXIMA_LONGITUD_CADENA];
    char candidatoVotoMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(candidatoVotoMayor, candidatos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(candidatoVotoMenor, candidatos[0], MAXIMA_LONGITUD_CADENA);
    cout << "=>Presentacion candidatos" << endl;
    imprimirMatrizLinea();
    float promedioMayor = matriz[0][NUMERO_RONDAS];
    float promedioMenor = matriz[0][NUMERO_RONDAS];
    cout << setw(9) << "Candidato";
    for (x = 0; x < NUMERO_NOTAS; x++)
    {
        cout << setw(9) << "Ronda " << x + 1;
    }
    cout << setw(8) << "Total" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_CANDIDATOS; y++)
    {
        cout << "!" << setw(8) << candidatos[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_NOTAS; x++)
        {
            int voto = static_cast<int>(matriz[y][x]);
            cout << setw(9) << voto << "!";
        }
        float promedio = matriz[y][NUMERO_NOTAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(candidatoVotoMayor, candidatos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(candidatoVotoMenor, candidatos[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    cout << "Candidato con mayor votacion : " << setw(10) << candidatoVotoMayor << setw(10) << promedioMayor << endl;
    cout << "Candidato con menor votacion " << setw(10) << candidatoVotoMenor << setw(10) << promedioMenor << endl;
}
