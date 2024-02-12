#include <iostream>
using namespace std;

int main ()
{
  float kmpordia,costoGas,promediokm_porlitro,precioEstacionamiento,peaje;
  float costo_gasolina_por_km,costo_total_gas,total;
  cout << "-------------------------Bienvenido-----------------------\n";
  cout << "Calculadora de ahorro por viajes compartidos en automovil: "<<endl;
  cout<<"\n";
  cout << "Ingrese el total de kilómetros conducidos por dia: ";
  cin >> kmpordia;
  cout << "¿Cual es su costo por litro de gasolina?: ";
  cin>>costoGas;
  cout << "¿Cual es su promedio de kilómetros por litro?: ";
  cin>>promediokm_porlitro;
  cout << "Ingrese el precio de estacionamiento por día: ";
  cin>>precioEstacionamiento;
  cout << "¿De cuanto es su Peaje por día? ";
  cin>>peaje;
  costo_gasolina_por_km =costoGas/promediokm_porlitro;
  costo_total_gas= costo_gasolina_por_km*kmpordia;
  total=costo_total_gas+precioEstacionamiento+peaje;
  cout<<"El costo diario por conducir al trabajo es: Q "<<total;
  return 0;
}
