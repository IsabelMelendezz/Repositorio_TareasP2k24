#include "Juego.h"
#include "Jugador.h"
#include <fstream>
#include <unistd.h>
#include <iomanip>
#include <Windows.h>

Jugador gamer();

int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}

	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}

	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}

	Juego::Juego(Tablero tablero, int cantidadMinas,int cantidadVidas)
	{
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->colocarMinasAleatoriamente();
		this->cantidadVidas = cantidadVidas;
	}

	void Juego::colocarMinasAleatoriamente()
	{
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;
			}
		}
	}

	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}

	int Juego::solicitarColumnaUsuario()
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1;
	}

	bool Juego::jugadorGana()
	{
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
		if (conteo == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Juego::iniciar()
	{
		int fila, columna;
        Jugador gamer(this->cantidadVidas);
        system("cls");
        gamer.guardarNombre();
		while (true)
		{

            cout << gamer.getNombre();
			cout << setw(10) << "Score : " << gamer.obtenerScore() << setw(10);
            SetConsoleOutputCP(CP_UTF8);
			for (int i=0; i < gamer.obtenerVidas() ; i++ ){
                setvbuf(stdout, nullptr, _IONBF, 0);
                cout << "♥";
			}
			cout << endl;

			this->tablero.imprimir();
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);
			gamer.aumentarScore(tablero.obtenervalorCelda(columna,fila));
            system("cls");
			if (!respuestaAUsuario)
			{
			    gamer.restarVida();

			}
			if (!gamer.validarVidas()){
                this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;

			}

			if (this->jugadorGana())
			{
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}

		}
	}
	void Juego::dibujarPortada(string Portada)
	{
	    string line;
	ifstream myfile(Portada);
	if (myfile.is_open())
    {
        while(getline(myfile,line))
        {
            cout<<line<<endl;
        }

        myfile.close();
        system("pause");

    }

    else
    {
        cout<<"Error FATAL: el archivo no pudo ser cargado"<<endl;
        system("pause");
    }

	}
	void Juego::dibujarcreditos(string creditos)
	{
    system("cls");
    string line;
	ifstream myfile2(creditos);
	if (myfile2.is_open())
    {
        while(getline(myfile2,line))
        {
            cout<<line<<endl;
        }

        myfile2.close();
         cout << endl << endl << endl ;
        system("pause");

    }

    else
    {
        cout<<"Error FATAL: el archivo no pudo ser cargado"<<endl;
        system("pause");
    }

	}

	void Juego::dibujarscores(string scores)
	{
    system("cls");
    string line;
	ifstream myfile2(scores);
	if (myfile2.is_open())
    {
        while(getline(myfile2,line))
        {
            cout<<line<<endl;
        }

        myfile2.close();
        cout << endl << endl << endl ;
        system("pause");

    }

    else
    {
        cout<<"Error FATAL: el archivo no pudo ser cargado"<<endl;
        system("pause");
    }

	}

