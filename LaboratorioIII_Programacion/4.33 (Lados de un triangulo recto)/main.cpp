#include <iostream>

using namespace std;

int main()
{
    int lado1=0,lado2=0,lado3=0;
    int hipotenusa=0, catetoA=0,catetoB=0;
    int c=0, c2=0;

    cout << "Ingrese el primer lado: " << endl;
    cin>>lado1;
    cout << "Ingrese el segundo lado: " << endl;
    cin>>lado2;
    cout << "Ingrese el tercer lado: " << endl;
    cin>>lado3;
    if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
        if (lado1>lado2 && lado1>lado3){
            hipotenusa=lado1;
            catetoA=lado2;
            catetoB=lado3;
        }
        else if (lado2>lado1 && lado2>lado3){
            hipotenusa=lado2;
            catetoA=lado1;
            catetoB=lado3;
        }
        else if (lado3>lado1 && lado3>lado2){
            hipotenusa=lado3;
            catetoA=lado1;
            catetoB=lado2;
        }
        if (hipotenusa * hipotenusa == catetoA * catetoA + catetoB * catetoB) {
        cout << "Estos lados pueden formar un triangulo rectangulo" << endl;
        cout<<"Su hipotenusa es "<<hipotenusa<<" Y sus catetos son: "<< catetoA<< " y "<< catetoB;
        } else {
        cout << "Estos lados NO pueden formar un triangulo rectangulo" << endl;
        }
    }else {
        cout << "Por favor, ingrese enteros distintos de cero." << endl;
    }

    return 0;
}
