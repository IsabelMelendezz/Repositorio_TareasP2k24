#include "Tablero.h"  // Incluimos el archivo de cabecera que contiene la clase Tablero.h
#include <sstream>  // Incluimos la librería para flujos de cadena
#include <iostream>  // Incluimos la librería para entrada/salida de datos en pantalla

using namespace std;  // Usamos el std para no tener que escribir 'std::' antes de cada función

// constructor de la clase Tablero
Tablero::Tablero() {}

// establecemos un constructor con parametros para la clase Tablero
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador) {
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;
    int x, y;
    for (y = 0; y < this->alturaTablero; y++) {
        vector<Celda> fila;
        for (x = 0; x < this->anchoTablero; x++) {
            fila.push_back((Celda(x, y, false)));
        }
        this->contenidoTablero.push_back(fila);
    }
}

// obtener la altura del tablero
int Tablero::getAlturaTablero() { return this->alturaTablero; }

// establecer la altura del tablero
int Tablero::setAlturaTablero(int alturaTablero) { this->alturaTablero = alturaTablero; }

// obtener el ancho del tablero
int Tablero::getAnchoTablero() { return this->anchoTablero; }

// establecer el ancho del tablero
int Tablero::setAnchoTablero(int anchoTablero) { this->anchoTablero = anchoTablero; }

// obtener el modo desarrollador del tablero
bool Tablero::getModoDesarrollador() { return this->modoDesarrollador; }

// establecer el modo desarrollador del tablero
bool Tablero::setModoDesarrollador(bool modoDesarrollador) { this->modoDesarrollador = modoDesarrollador; }

// obtenemos la representación de una mina en una posición específica del tablero
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY) {
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);
    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador) {
        if (celdaTemporal.getMina()) return "*";
        else {
            int cantidadCelda=this->minasCercanas(coordenadaY,coordenadaX);
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;
            return cantidadCeldaString;
        }
    } else return "?";
}

// Aquí contamos la cantidad de minas cercanas a una celda en el tablero
int Tablero::minasCercanas(int filaTablero, int columnaTablero) {
    int contadorTablero = 0;
    int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;
    if (filaTablero <= 0) filaInicioTablero = 0;
    else filaInicioTablero = filaTablero - 1;

    if (filaTablero + 1 >= this->alturaTablero) filaFinTablero = this->alturaTablero - 1;
    else filaFinTablero = filaTablero + 1;

    if (columnaTablero <= 0) columnaInicioTablero = 0;
    else columnaInicioTablero = columnaTablero - 1;

    if (columnaTablero + 1 >= this->anchoTablero) columnaFinTablero = this->anchoTablero - 1;
    else columnaFinTablero = columnaTablero + 1;

    int m;
    for (m = filaInicioTablero; m <= filaFinTablero; m++) {
        int l;
        for (l = columnaInicioTablero; l <= columnaFinTablero; l++) {
            if (this->contenidoTablero.at(m).at(l).getMina()) contadorTablero++;
        }
    }
    return contadorTablero;
}

// imprimimos un separador en el encabezado del tablero
void Tablero::imprimirSeparadorEncabezado() {
    int m;
    for (m = 0; m <= this->anchoTablero; m++) {
        cout << "----";
        if (m + 2 == this->anchoTablero) cout << "-";
    }
    cout << "\n";
}

// imprime un separador entre filas del tablero
void Tablero::imprimirSeparadorFilas() {
    int m;
    for (m = 0; m <= this->anchoTablero; m++) {
        if (m <= 1) cout << "|---";
        else cout << "+---";
        if (m == this->anchoTablero) cout << "+";
    }
    cout << "\n";
}

// imprime el encabezado del tablero
void Tablero::imprimirEncabezado() {
    this->imprimirSeparadorEncabezado();
    cout << "|   ";
    int l;
    for (l = 0; l < this->anchoTablero; l++) {
        cout << "| " << l + 1 << " ";
        if (l + 1 == this->anchoTablero) cout << "|";
    }
    cout << "\n";
}

// imprimir el tablero completo
void Tablero::imprimir() {
    this->imprimirEncabezado();
    this->imprimirSeparadorEncabezado();
    int x, y;
    for (y = 0; y < this->alturaTablero; y++) {
        cout << "| " << y + 1 << " ";
        for (x = 0; x < this->anchoTablero; x++) {
            cout << "| " << this->getRepresentacionMina(x, y) << " ";
            if (x + 1 == this->anchoTablero) cout << "|";
        }
        cout << "\n";
        this->imprimirSeparadorFilas();
    }
}

// Método para colocar una mina en una posición específica del tablero
bool Tablero::colocarMina(int x, int y) { return this->contenidoTablero.at(y).at(x).setMina(true); }

// Método para descubrir una mina en una posición específica del tablero
bool Tablero::descubrirMina(int x, int y) {
    this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);
    Celda celda = this->contenidoTablero.at(y).at(x);
    if (celda.getMina()) return false;
    return true;
}

// Método para contar la cantidad de celdas sin minas y sin descubrir en el tablero
int Tablero::contarCeldasSinMinasYSinDescubrir() {
    int x, y, contador = 0;
    for (y = 0; y < this->alturaTablero; y++) {
        for (x = 0; x < this->anchoTablero; x++) {
            Celda celdaTemporal = this->contenidoTablero.at(y).at(x);
            if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina()) contador++;
        }
    }
    return contador;
}
