#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Hora, Hora2, Minutos, Minutos2, Segundos, Segundos2;
	string Patente;
	float Velocidad, Tiempo;
	cout<< "Ingrese la patente ";
	cin>> Patente;
	cout<<"ingrese la hora, minutos, seguntos del puesto 1"<< endl;
	cin>> Hora;
	cin>>Minutos;
	cin>>Segundos;
	cout<<"ingrese la hora, minutos, seguntos del puesto 2" <<endl;
	cin>> Hora2;
	cin>>Minutos2;
	cin>>Segundos2;
	Tiempo = (Hora2+(Minutos2/60)+(Segundos2/3600)) - (Hora+(Minutos/60)+(Segundos/3600)); 
	Velocidad = (7,5 / Tiempo);
	cout <<"La Patente es: " << Patente <<" Y La velocidad promedio es: "<<Velocidad;
	
	return 0;
}

