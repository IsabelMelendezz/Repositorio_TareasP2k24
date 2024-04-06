//Librerias que almacenan los atributos y prototipos de los metodos utilizados para crear y modificar las celdas del juego
#ifndef CELDA_H
#define CELDA_H

class Celda
{
    public:
        //Iniciamos el constructor con sus parametros
        Celda();
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);
        //Con los set establece las coordenadas y las celdas de la mina
        int setCoordenadaX(int coordenadaX);
        int getCoordenadaX();
        int setCoordenadaY(int coordenadaY);
        int getCoordenadaY();
        bool setMina(bool estadoMina);
        bool getMina();
        bool setMinaDescubierta(bool minaDescubierta);
        bool getMinaDescubierta();
        //imprime informacion de la celda
        void imprimirCelda();
    protected:

    private:
        //Datos Privados como la posicion de la mina
        int coordenadaX, coordenadaY;
        bool mina, minaDescubierta;
};

#endif // CELDA_H
