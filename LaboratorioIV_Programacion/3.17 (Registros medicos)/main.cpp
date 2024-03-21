#include <iostream>
#include <string>
#include <cmath>
#include<ctime>

using namespace std;

class PerfilMedico {
public:
    PerfilMedico(std::string primerNombre, std::string apellido, char sexo, int dia, int mes, int anio, double altura, double peso)
        : primerNombre(primerNombre), apellido(apellido), sexo(sexo), dia(dia), mes(mes), anio(anio), altura(altura), peso(peso) {}

    void setPrimerNombre(std::string primerNombre) { primerNombre = primerNombre; }
    std::string getPrimerNombre() const { return primerNombre; }

    void setApellido(std::string apellido) { apellido = apellido; }
    std::string getApellido() const { return apellido; }

    void setSexo(char sexo) { sexo = sexo; }
    char getSexo() const { return sexo; }

    void setDia(int dia) { dia = dia; }
    int getDia() const { return dia; }

    void setMes(int mes) { mes = mes; }
    int getMes() const { return mes; }

    void setAnio(int anio) { anio = anio; }
    int getAnio() const { return anio; }

    void setAltura(double altura) { altura = altura; }
    double getAltura() const { return altura; }

    void setPeso(double peso) { peso = peso; }
    double getPeso() const { return peso; }

    int calcularEdad() const {
        time_t t = time(NULL);
        tm* now = localtime(&t);

        int edad = now->tm_year + 1900 - anio;
        if (now->tm_mon < mes - 1 || (now->tm_mon == mes - 1 && now->tm_mday < dia)) {
            edad--;
        }
        return edad;
    }

    double calcularBMI() const {
        return peso / pow(altura / 100, 2);
    }

    int calcularFrecuenciaCardiacaMaxima() const {
        if (sexo == 'M' || sexo == 'm') {
            return 220 - calcularEdad();
        } else {
            return 210 - calcularEdad();
        }
    }

    std::string calcularRangoFrecuenciaCardiacaEsperada() const {
        int frecuenciaCardiacaMaxima = calcularFrecuenciaCardiacaMaxima();
        if (frecuenciaCardiacaMaxima < 50 || frecuenciaCardiacaMaxima > 200) {
            return "Fuera de rango";
        } else if (frecuenciaCardiacaMaxima >= 50 && frecuenciaCardiacaMaxima <= 100) {
            return "Bradicardia";
        } else {
            return "Taquicardia";
        }
    }

    static void mostrarTablaBMI() {
        cout << "---------------Valores del BMI:----------" << endl;
        cout << "Bajo peso: menos de 18.5" << endl;
        cout << "Normal: 18.5 a 24.9" << endl;
        cout << "Sobrepeso: 25 a 29.9" << endl;
        cout << "Obesidad: 30 o mas" << endl;
    }

private:
    std::string primerNombre;
    std::string apellido;
    char sexo;
    int dia;
    int mes;
    int anio;
    double altura;
    double peso;
};

int main() {
    std::string primerNombre, apellido;
    char sexo;
    int dia, mes, anio;
    double altura, peso;

    cout << "Ingrese el primer nombre: ";
    cin >> primerNombre;
    cout << "Ingrese el apellido: ";
    cin >> apellido;
    cout << "Ingrese el sexo (M/F): ";
    cin >> sexo;
    cout << "Ingrese la fecha de nacimiento (dia mes anio): ";
    cin >> dia >> mes >> anio;
    cout << "Ingrese la altura en centimetros: ";
    cin >> altura;
    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;

    PerfilMedico perfilMedico(primerNombre, apellido, sexo, dia, mes, anio, altura, peso);

    cout << "\n------------------Perfil Medico-------------------------------------\n";
    cout << "Nombre: " << perfilMedico.getPrimerNombre() << " " << perfilMedico.getApellido() << "\n";
    cout << "Sexo: " << perfilMedico.getSexo() << "\n";
    cout << "Fecha de nacimiento: " << perfilMedico.getDia() << "/" << perfilMedico.getMes() << "/" << perfilMedico.getAnio() << "\n";
    cout << "Altura: " << perfilMedico.getAltura() << " cm\n";
    cout << "Peso: " << perfilMedico.getPeso() << " kg\n";
    cout << "Edad: " << perfilMedico.calcularEdad() << " anios\n";
    cout << "BMI: " << perfilMedico.calcularBMI() << "\n";
    cout << "Frecuencia cardiaca maxima: " << perfilMedico.calcularFrecuenciaCardiacaMaxima() << "\n";
    cout << "Rango de frecuencia cardiaca esperada: " << perfilMedico.calcularRangoFrecuenciaCardiacaEsperada() << "\n";

    PerfilMedico::mostrarTablaBMI();

    return 0;
}
