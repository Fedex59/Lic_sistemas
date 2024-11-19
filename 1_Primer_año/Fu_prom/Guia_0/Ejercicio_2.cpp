#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	float Peso, Estatura;
	string Nombre;
	cout<< "ingrese su nombre: ";
	cin>>Nombre;
	cout<< "ingrese su peso: ";
	cin>>Peso;
	cout<< "ingrese su estatura: ";
	cin>>Estatura;
	Peso=(Peso/Estatura);
	cout <<" El indice de masa corporal de "<< Nombre <<"es " << Peso ;
	return 0;
}