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
	
	
	if (Peso>0 & Peso<18,5)
	{
		cout <<" El indice de masa corporal de "<< Nombre <<" es " << Peso <<" y esta debajo del peso normal" ;
	}
	else  if (Peso>18,5 & Peso<25)
	{
		cout <<" El indice de masa corporal de "<< Nombre <<" es " << Peso <<" y esta dentro del peso normal" ;
	}
	else  if (Peso>25 & Peso<30)
	{
		cout <<" El indice de masa corporal de "<< Nombre <<" es " << Peso <<" y esta con sobrepeso" ;
	}
	else 
	{
		cout <<" El indice de masa corporal de "<< Nombre <<" es " << Peso <<" y esta con obesidad" ;
	}
	
return 0;
}
