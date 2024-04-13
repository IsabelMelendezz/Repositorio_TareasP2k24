// Jugador.cpp
#include "Jugador.h"
#include <iostream>

using namespace std;

Jugador::Jugador(int vidas_iniciales) : vidas(vidas_iniciales), score(0) {}

void Jugador::restarVida() {
    vidas--;
}

int Jugador::obtenerVidas() const {
    return vidas;
}

void Jugador::aumentarScore(int puntos) {
    score += puntos;
}

int Jugador::obtenerScore() const {
    return score;
}

void Jugador::guardarNombre()
{
    cout << "Ingresa tu nombre de usuario para almacenar tu score"<< endl;
    cin >> this->nombre;

}

string Jugador::getNombre() const {
    return nombre;
}

void Jugador::guardarScore() const {
    std::ofstream archivo("scores.txt", std::ios::out | std::ios::app);
    if (archivo.is_open()) {
        archivo << nombre << "\t" << "\t" ;
        archivo << "Score: " << score << std::endl;
        archivo.close();
        std::cout << "¡Su puntaje ha sido guardado!" << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo." << std::endl;
    }
}

bool Jugador::validarVidas() {
    if (vidas <= 0) {
        std::cout << "¡Has perdido! Tu puntaje final es: " << score << std::endl;
        guardarScore();
        return false; // Termina el juego
    }
    return true; // El juego continúa
}
