#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Fecha, Dia, Mes, Anio; 
	cout<< "ingrese la hora en formato MMDDAA: ";
	cin>>Fecha;
	Anio = Fecha/10000;
	Mes = Fecha%100;
	Dia = (Fecha/100)%100;
	cout <<"La fecha es: " << Dia <<"/"<< Mes <<"/"<< Anio ;
	return 0;
}