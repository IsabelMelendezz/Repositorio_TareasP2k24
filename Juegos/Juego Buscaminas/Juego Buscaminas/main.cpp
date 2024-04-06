#include <iostream>
#include <unistd.h>
#include "Juego.h" //Incluye encabezados de la clase juego
#include "Config.h" //Incluye encabezados de la clase configuracion

using namespace std;

int main()
{
    //---------Definimos constantes que contienen la config. Inicial del juego----------

    //---------------Inicializamos la matriz, que nos servira como tablero----------------------------------------------------------------------------

    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true; //sirve para que el tablero muestre donde estan las minas mientras sea true (boolean), si no lo esconde.
    const int VIDASTABLERO = 3;


    //Crea 2 objetos, cada uno con la configuracion del juego---------------------------------------------------------------------------------
    /*1)*/ Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    /*2)*/Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());

    //--------------------------------------------------------------------------------------------------------------------------------------
    srand(getpid());//semilla que genera los numeros aleatorios para el tablero
    int opciones;//controla las opciones del switch
    bool repetir = true; //boolean que controla el ciclo de repetir el juego

    do //Ciclo que controla si el usuario desea seguir repitiendo el juego

    {
        //------------------Presentacion de menu------------------------------------------------------------------
        system("cls");
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;

        //Switch que controla el menu principal del juego------------------------------------------------------------
        switch (opciones)
        {
        case 1:
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
                //Inicia el juego creando un objeto juegoTemporal con la configuración actual y llama
                //al método iniciar() para comenzar el juego.
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juegoTemporal.iniciar();

                system("pause");
                break;
            }
        case 3: repetir = false;
                break;
                //Cambia el valor a false para que se salga del juego
        }
    } while (repetir);
    system("cls"); //Limpiar pantalla
    return 0;
}
