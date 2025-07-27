#include <iostream>
#include <cmath>
using namespace std;

//float Hipot(int ladoa, int ladob);
float Facto(int FA);
//int Division_entera(int DA, int DB);
//void Intercambio(char &IA, char &IB);
//int Suma_vector(int Vec[], int Cant);

int main(int argc, char *argv[]) {
	
	int FA;
	//float resultado;
		
	cout <<"ingrese los valores de A y B ";
	cin>> FA;
	
	//resultado = Hipot(a, b);
	
	cout<< "el resultado de la hipotenusa es: "<< FA; 
	
	
	return 0;
}

/*float Hipot(int ladoa, int ladob)
{
	
	float resultado = (ladoa*ladoa)+(ladob*ladob)  ;
	
	return sqrt (resultado);
	
}*/

float Facto(int FA);{

for (int i=FA;i>=1;i--)
	FA = FA * i;
	return (FA);
}

