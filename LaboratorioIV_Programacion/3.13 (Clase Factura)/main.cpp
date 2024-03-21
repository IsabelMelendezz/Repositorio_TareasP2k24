#include <iostream>
#include <string>

using namespace std;

class Factura {
private:
    string mNumeroPieza;
    string mDescripcionPieza;
    int mCantArticulos;
    int mPrecio;

public:
    Factura(string numeroPieza, string descripcionPieza, int cantArticulos, int precio);
    void mostrarFactura();
    int obtenerMontoFactura() const;
};

Factura::Factura(string numeroPieza, string descripcionPieza, int cantArticulos, int precio) {
    mNumeroPieza = numeroPieza;
    mDescripcionPieza = descripcionPieza;
    mCantArticulos = cantArticulos;
    mPrecio = precio;
}

void Factura::mostrarFactura() {
    cout << "El numero de pieza elegida: " << mNumeroPieza << endl;
    cout << "Descripcion del articulo: " << mDescripcionPieza << endl;
    cout << "La cantidad de Articulos es : " << mCantArticulos << endl;
    cout << "El precio por articulo es de: Q " << mPrecio << endl;
}

int Factura::obtenerMontoFactura() const {
    return mCantArticulos * mPrecio;
}

int main() {
    Factura f1 = Factura("Utg111136", "Rotomartillo Industrial 1/2 1010W", 3, 379);
    f1.mostrarFactura();
    cout << "El monto de la factura es de Q. " << f1.obtenerMontoFactura() << endl;
    return 0;
}
