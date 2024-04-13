#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"

class Juego
{
private:
	Tablero tablero;
	//Creamos el atributo--------------------------------------------------------------
	int cantidadMinas;

	//Creamos los metodos--------------------------------------------------------------
	int aleatorio_en_rango(int minimo, int maximo);//Permite crear numeros aleatorios de acuerdo a un rango

    //Indica donde colocar las minas, solo devuelve valor pero no recibe nada------------------------
	int filaAleatoria();
	int columnaAleatoria();

public:
    //Constructor que recibe un objeto llamado Tablero y la cantidad de minas.
    Juego(Tablero tablero, int cantidadMinas);
	void colocarMinasAleatoriamente(); //Método tipo void para colocar las minas en el tablero de manera aleatoria.
	//Metodos para configurar el tablero por el usuario-------------------------------
	int solicitarFilaUsuario();
	int solicitarColumnaUsuario();

	//---------------------------------------------------------------------------------
	//Metodos que definen el inicio y el jugador ganador
	bool jugadorGana();
	void iniciar();

	//--------------------------------------------------------------------------------------
	void dibujarPortada(string nombreArchivo);//Maneja lectura y escrutura de archivos externos del programa
};

#endif // JUEGO_H
