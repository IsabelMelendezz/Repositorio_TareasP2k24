#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>
#include "Celda.h"

using namespace std;

//esta clase se utilizara para crear el tablero
class Tablero
{
    public:
        Tablero();
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);
        //Tablero se enviaran las constantes en modo desarrollador
        int getAlturaTablero();
        //getAlturaTablero
        int setAlturaTablero(int alturaTablero);
        // se usa esta variable para acceder a los atributos privados
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);
        bool getModoDesarrollador();
        //getModoDesarrollador es quien obtiene informacion el modoDesarrolador
        bool setModoDesarrollador(bool modoDesarrollador);
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();
        bool colocarMina(int x, int y);
        //colocarMina utiliza paramatremos para posicionarse en las celdas
        bool descubrirMina(int x, int y);
        //descubrirMina este se utiliza en modo desarrollador
        int contarCeldasSinMinasYSinDescubrir();
        //contarCeldasSinMinasYSinDescubrir verifica cuantas minas no han sido descubiertas

    protected:

    private:
        int alturaTablero, anchoTablero;
        bool modoDesarrollador;
        vector<vector<Celda> > contenidoTablero;

        string getRepresentacionMina(int x, int y);
        int minasCercanas(int fila, int columna);
        //minasCercanas es el metodo que nos dice si existen minas cercanas.
};

#endif // TABLERO_H
