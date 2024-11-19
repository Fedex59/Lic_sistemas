#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Total, Muj, Hom; 
	cout<< "Ingrese la cantidad de Mujeres ";
	cin>>Muj;
	cout<< "Ingrese la cantidad Total ";
	cin>>Total;
	Hom=Total-Muj;
	Muj=(Muj*100)/Total;
	Hom=(Hom*100)/Total;
	cout <<"Los porcentajes de Mujeres y Hombres son: " << Muj <<"% " << Hom <<"% ";
	
	
	return 0;
}
