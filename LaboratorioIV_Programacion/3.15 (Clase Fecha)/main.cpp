#include <iostream>

using namespace std;
class Fecha {
private:
    int c_mes;
    int c_dia;
    int c_anio;

public:
    Fecha(int mes, int dia, int anio);
    //funcion establecer y obtener para el primer miembro(dia)
    void establecerDia(int dia);
    int obtenerDia() const;

    //funcion establecer y obtener para el segundo miembro(mes)
    void establecerMes(int mes);
    int obtenerMes() const;

    //funcion establecer y obtener para el tercer miembro(año)
    void establecerAnio(int anio);
    int obtenerAnio() const;
    //funcion o metodo para mostrar la fecha
     void mostrarMensaje() const;
};
// Constructor que se utiliza para inicializar los atributos

Fecha::Fecha(int dia, int mes, int anio) {
    establecerDia(dia);
    establecerMes(mes);
    establecerAnio(anio);
}

//--------------------- Funciones para establecer y obtener el primer miembro de la funcion-------------------------------------------
//establecer
void Fecha::establecerDia(int dia) {
    c_dia=dia;
}
//obtener
 int Fecha::obtenerDia() const {
    return c_dia;
 }

//--------------------- Funciones para establecer y obtener el segundo miembro de la funcion-------------------------------------------
//establecer
void Fecha::establecerMes(int mes) {
    c_mes=mes;
}
//obtener
 int Fecha::obtenerMes() const {
    return c_mes;
 }

 //--------------------- Funciones para establecer y obtener el tercer miembro de la funcion-------------------------------------------
//establecer
void Fecha::establecerAnio(int anio) {
    c_anio=anio;
}
//obtener
 int Fecha::obtenerAnio() const {
    return c_anio;
 }

 // Función para mostrar el mensaje de bienvenida
void Fecha::mostrarMensaje() const {
    cout << "La fecha de hoy en Guatemala es " << obtenerDia ()<<" / "<<obtenerMes()<<" / "<< obtenerAnio ()<<endl;
}



int main()
{
    Fecha f1 (20,03,2024);
    f1.mostrarMensaje();

    return 0;
}
