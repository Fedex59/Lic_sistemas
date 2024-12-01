#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Venta, Porc; 
	float Costo;
	cout<< "Ingrese el valor del producto ";
	cin>>Venta;
    cout<< "Ingrese el porcentaje de ganancia ";
	cin>>Porc;
	Costo = Venta/1+(Porc/100.0);

	cout <<"El costo es de: " << Costo;
	
	
	return 0;
}