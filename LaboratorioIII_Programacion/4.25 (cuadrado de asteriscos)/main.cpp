#include <iostream>

using namespace std;
int ancho=0;
int alto=0;
int i=0;
int i2=0;
char caracter='*';
int main()
{
    cout << "¡Bienvenido a nuestro creador de figuras!" << endl;
    cout<<"De cuanto desea el ancho de su figura (unicamente de 1-20)?"<<endl;
    cin>>ancho;
    while (ancho>20) {
        cout<<"El numero esta fuera de rango, ingrese otro:"<<endl;
        cin>>ancho;
    }
    cout<<"De cuanto desea el alto (unicamente de 1-20)?"<<endl;
    cin>>alto;
    while (alto>20) {
        cout<<"El numero esta fuera de rango, ingrese otro:"<<endl;
        cin>>alto;
    }
    //controla el ancho superior
    for (i=1;i<=ancho;++i){
        cout<<caracter;
        }
        cout<<endl;
        //controla el largo derecho e izquierdo
    for (i=1;i<=alto;++i){
        cout<<caracter;
        for (i2=1; i2<=ancho-2;++i2){
        cout<<" ";
        }
        cout<<caracter<<endl;
    }
    //controla el ancho inferior7
    if (alto>1){
        for (i=1;i<=ancho;i++){
            cout<<caracter;
            }
    cout<<endl;
    }

return 0;
}
