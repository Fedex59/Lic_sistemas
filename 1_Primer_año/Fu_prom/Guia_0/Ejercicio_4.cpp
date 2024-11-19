#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Dato, Hora, Min, Seg; 
	cout<< "ingrese la hora en formato HHMMSS: ";
	cin>>Dato;
	Hora = Dato/10000;
	Min = Dato%100;
	Seg = (Dato/100)%100;
	Hora=Hora*3600;
	Min=Min*60;
		Seg=Seg+Hora+Min;
	cout <<"Los Seguntos totales son: " << Seg ;
	

return 0;
}