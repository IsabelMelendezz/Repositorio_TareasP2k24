#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"

class Juego
{
private:
	Tablero tablero;
	int cantidadMinas;
    int cantidadVidas;
	int aleatorio_en_rango(int minimo, int maximo);
	int filaAleatoria();
	int columnaAleatoria();
public:
    Juego(Tablero tablero, int cantidadMinas,int cantidadVidas);
	void colocarMinasAleatoriamente();
	int solicitarFilaUsuario();
	int solicitarColumnaUsuario();
	bool jugadorGana();
	void iniciar();
	void dibujarPortada(string Portada);
	void dibujarcreditos(string creditos);
	void dibujarscores(string scores);
};

#endif // JUEGO_H
