#include "config.h"// Incluye el archivo de encabezado de la clase config.h
#include <iostream>
#include <unistd.h>
using namespace std;

//En esta clase sirve para almacenar las configuraciones que se desean realizar adentro del juego
//por medio de metodos para obtener y establecer los parametros de la nueva configuracion
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    //Toma los parámetros de entrada y los asigna a las variables miembro de la clase
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}

void Config::menuConfiguracion()
{
    int opciones;
    int valorIngresado;
    bool repetir = true;
    do
    {
        //Se crea el tablero de configuracion
        system("cls");
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        if (opciones!=6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            //Se escoge la opcion que se va a modificar
            cin >> valorIngresado;
        //se asigna el valor

        }//
        switch (opciones)
        {
        case 1:
            {
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }
        case 2:
            {
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }
        case 3:
            {
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;
                break;
            }
        case 5:
            {
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }
        case 6: repetir = false;
                break;
        }
        system("pause");
    } while (repetir);//Muestra el menu de configuracion y permite al usuario modificar parametros del juego
}

//Metodo para establecer las filas del tablero
int Config::getfilasTablero()
{
    return this->filasTablero;
    //Devuelve el numero de filas del tablero
}

//Metodo  para obtener las filas del tablero
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero;
    //Se asigna el numero del de filas del tablero
}


//Metodo  para establecer las columnas del tablero
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
    //Devuelve el numero de columnas del tablero
}

//Metodo  para obtener las filas del tablero
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;
    //Se asigna el numero del de columnas del tablero
}

//Metodo  para establecer las minas del tablero
int Config::getminasTablero()
{
    return this->minasTablero;
    //Devuelve el numero de minas en el tablero
}

//Metodo  para obtener las minas del tablero
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero;
    //asgina el numero de minas en el tablero
}

//Metodo  para establecer el modo desarrollador
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
    //devuelve el modo desarrollador
}

//Metodo para obtener el modo desarrollador
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;
    //Asgina el modo desarrollador
}

//Metodo para establecer las vidas del juego
int Config::getvidasTablero()
{
    return this->vidasTablero;
    //devuelve el numero de vidas
}

//Metodo para establecer las vidas del juego
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero;
    //asigna el numero de vidas
}
