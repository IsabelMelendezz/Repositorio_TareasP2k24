// Referenciamos el encabezado que contiene las firmas / prototipos para esta clase juego
#include "Juego.h"
#include <fstream>
#include <unistd.h>

// Función que devuelve un entero entre el minimo y maximo utilizado en las funciones de fila y columna aleatoria
int Juego::aleatorio_en_rango(int minimo, int maximo)
    {
        return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
    }
// Función que devuleve una fila aleatoria
    int Juego::filaAleatoria()
    {
        return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
    }
// Función que devuleve una columna aleatoria
    int Juego::columnaAleatoria()
    {
        return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
    }

// Setea el tablero y la cantidad de minas en el juego
    Juego::Juego(Tablero tablero, int cantidadMinas)
    {
        this->tablero = tablero;
        this->cantidadMinas = cantidadMinas;
        this->colocarMinasAleatoriamente();
    }
// función que coloca las minas de forma aleatoria
    void Juego::colocarMinasAleatoriamente()
    {
        int x, y, minasColocadas = 0;
        // Se realiza un ciclo para colocar las minas de acuerdo al parametro de cantidad de minas
        while (minasColocadas < this->cantidadMinas)
        {
            x = this->columnaAleatoria();
            y = this->filaAleatoria();
            if (this->tablero.colocarMina(x, y))
            {
                minasColocadas++;
            }
        }
    }
//Función que imprime en pantalla que FILA desea jugar el usuario
    int Juego::solicitarFilaUsuario()
    {
        int fila = 0;
        cout << "Ingresa la FILA en la que desea jugar: ";
        cin >> fila;
        return fila - 1;
    }
//Función que imprime en pantalla que COLUMNA desea jugar el usuario
    int Juego::solicitarColumnaUsuario()
    {
        int columna = 0;
        cout << "Ingresa la COLUMNA en la que desea jugar: ";
        cin >> columna;
        return columna - 1;
    }

//Función que realiza la validación de las celdas sin descubrir y las minas para verificar si el usuario ha ganado.
    bool Juego::jugadorGana()
    {
        int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
        if (conteo == 0) // si el conteo es igual a 0 quiere decir que el usuario ha ganado
        {
            return true;
        }
        else
        {
            return false;
        }
    }
// función que da inicio al juego , esta es parte del core del juego
    void Juego::iniciar()
    {
        int fila, columna;
        while (true)
        {
            this->tablero.imprimir();
            fila = this->solicitarFilaUsuario();
            columna = this->solicitarColumnaUsuario();
            bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila); // se invoca la función del tablero que descubre la mina
            if (!respuestaAUsuario) // Si la respuesta es false quiere decir que el usuario toco una mina con las coordenadas
            {
                cout << "Perdiste el Juego\n";
                this->tablero.setModoDesarrollador(true);
                this->tablero.imprimir();
                break;
            }

            if (this->jugadorGana())
            {
                cout << "Ganaste el Juego\n";
                this->tablero.setModoDesarrollador(true);
                this->tablero.imprimir();
                break;
            }
        }
    }
