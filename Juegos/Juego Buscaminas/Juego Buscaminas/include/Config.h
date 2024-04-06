//Librerias que almacenan los atributos y prototipos de los metodos utilizados para crear y modificar las celdas del juego
#ifndef CONFIG_H
#define CONFIG_H

class Config
{
    public:
        //Iniciamos el constructor con sus parametros
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);
       //Con los Get obtiene el numero de filas y columnas del tablero
       //Con los set se Establece el numero de filas y columnas del tablero
        int getfilasTablero();
        int setfilasTablero(int filasTablero);
        int getcolumnasTablero();
        int setcolumnasTablero(int columnasTablero);
        //Se establece la cantidad de minas en el tablero
        int getminasTablero();
        int setminasTablero(int minasTablero);
        //Establecemos el estado del modo desarrollador del juego
        bool getmodoDesarrolladorTablero();
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);
        //Obtenemos el numero de vidas disponibles
        int getvidasTablero();
        int setvidasTablero(int vidasTablero);
        //Muestra el menu de configuraciones
        void menuConfiguracion();
    protected:

    private:
        //Declaracion de Variables Privadas
        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrolladorTablero;
        int vidasTablero;
};

#endif // CONFIG_H
