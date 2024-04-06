#include "Celda.h" // Incluye el archivo de encabezado de la clase Celda
#include <iostream>
using namespace std;

Celda::Celda()
{
}

Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina) // Constructor con parámetros
{
    //Se inicializa los atributos de la celda con los valores proporcionados
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;
}

//Método para establecer la coordenada X
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
    //se asigna coordenada en X
}

// Método para obtener la coordenada X
int Celda::getCoordenadaX()
{
    return this->coordenadaX;
    //se devuelve la coordenada en x
}

// Método para establecer la coordenada Y
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
    // Asigna la nueva coordenada Y
}

// Método para obtener la coordenada Y
int Celda::getCoordenadaY()
{
    return this->coordenadaY;
    // Devuelve la coordenada Y
}

// Método para establecer el estado de la mina
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    // Si la celda ya tiene una mina, no se puede cambiar el estado
    {
        return false;
    // Devuelve false para indicar que no se pudo establecer la mina
    }
    else
    {
        this->mina = estadoMina;
        // Establece el estado de la mina
        return true;
        // Devuelve true para indicar que se pudo establecer la mina correctamente
    }
}

// Método para obtener el estado de la mina
bool Celda::getMina()
{
    return this->mina;
    // Devuelve true si la celda tiene una mina, false si no la tiene
}

// Método para establecer si la mina está descubierta
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
    // Establece el estado de la mina descubierta
}

// Método para obtener si la mina está descubierta
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;
    // Devuelve true si la mina está descubierta, false si no lo está
}

// Método para imprimir la información de la celda
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
    // Imprime la coordenada de la celda y si tiene una mina o no
}
