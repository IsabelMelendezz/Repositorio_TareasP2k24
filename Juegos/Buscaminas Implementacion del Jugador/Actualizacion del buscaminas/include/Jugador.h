// Jugador.h
#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <fstream>

using namespace std;


class Jugador {
private:
    int vidas;
    int score;
    string nombre;

public:
    Jugador();
    Jugador(int vidas_iniciales);
    void guardarNombre();
    string getNombre() const;
    void restarVida();
    int obtenerVidas() const;
    void aumentarScore(int puntos);
    int obtenerScore() const;
    void guardarScore() const;
    bool validarVidas();
};

#endif
