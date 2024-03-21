#include <iostream>
#include <string>

using namespace std;
//Defino la clase libro de calificaciones
class LibroCalificaciones {
//Elijo como privado los atributos:
private:
    string nombreCurso;
    string nombreInstructor;

public:
    LibroCalificaciones(string curso, string instructor); // Constructor
    //declaracion de metodos para establecer el curso
    void establecerNombreCurso(string curso);
    string obtenerNombreCurso() const;

    //declaracion de metodos para establecer el maestro
    void establecerNombreInstructor(string instructor);
    string obtenerNombreInstructor() const;
    // Metodo para mostrar el mensaje
    void mostrarMensaje() const;
};

// Constructor que se utiliza para inicializar los atributos
LibroCalificaciones::LibroCalificaciones(string curso, string instructor) {
    establecerNombreCurso(curso);
    establecerNombreInstructor(instructor);
}

// Funciones para establecer y obtener el nombre del curso
void LibroCalificaciones::establecerNombreCurso(string curso) {
    nombreCurso = curso;
}

string LibroCalificaciones::obtenerNombreCurso() const {
    return nombreCurso;
}

// Funciones para establecer y obtener el nombre del instructor
void LibroCalificaciones::establecerNombreInstructor(string instructor) {
    nombreInstructor = instructor;
}

string LibroCalificaciones::obtenerNombreInstructor() const {
    return nombreInstructor;
}

// Función para mostrar el mensaje de bienvenida
void LibroCalificaciones::mostrarMensaje() const {
    cout << "Bienvenido al curso de " << obtenerNombreCurso() << endl;
    cout << "Este curso es presentado por: " << obtenerNombreInstructor() << endl;
}

int main() {
    LibroCalificaciones libro("Programacion en C++", "Juan Perez");
    libro.mostrarMensaje();

    return 0;
}

