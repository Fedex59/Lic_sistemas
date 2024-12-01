#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Plata; 
	double Cotizacion, Dolar, Euro, Real;
	cout<< "Ingrese la cantidad de plata en pesos ";
	cin>> Plata;
	cout<< "Ingrese la cotizacion del dolar ";
	cin>>Cotizacion;
	Dolar = Dolar*Cotizacion;
	Euro=(Euro*105.49)*Cotizacion;
	Real=(Real/16.74)*Cotizacion;
		
		cout <<"El valor del Dolar, Euro y Real es: " << Dolar<<" "<<Euro<<" "<<Real;
	
	
	return 0;
}
