//Escriba un programa que reciba tres enteros del teclado e imprima la suma,
//promedio, producto, menor y mayor de estos números

#include <iostream>
using namespace std;

int main()
{
    //Declaracion de variables;
    int valor1,valor2,valor3=0;
    int suma=0;
    float promedio=0;
    int menor,mayor=0;
    int codigo=0;
    //Ingreso de datos
    cout<<"---Bienvenido---\n";
    cout<<"Ingrese sus 3 numeros enteros: \n";
    cin>>valor1>>valor2>>valor3;
    cout<<"Ingrese el codigo de su producto: \n";
    cin>>codigo;
    //proceso logico y aritmetico de datos
    suma=valor1+valor2+valor3;
    promedio=suma/3;
    mayor = valor1;
    menor = valor1;
    if (valor2 > mayor) {
        mayor = valor2;
    } else if (valor2 < menor) {
        menor = valor2;
    }
    if (valor3 > mayor) {
        mayor =valor3;
    } else if (valor3 < menor) {
        menor = valor3;
    }
    cout<<"La suma de sus valores es:"<<suma<<endl;
    cout<<"El promedio de sus valores es:"<<promedio<<endl;
    cout<<"El codigo de producto es:"<<codigo<<endl;
    cout<<"El valor menor es:"<<menor<<endl;
    cout<<"El valor mayor es:"<<mayor<<endl;



    return 0;
}
