#include <iostream>
#include <cmath>
using namespace std;

float Hipot(int ladoa, int ladob);
int Facto(int FA);
int Division_entera(int DA, int DB);
void Intercambio(char &IA, char &IB);
int Suma_vector(int Vec[], int Cant);

int main(int argc, char *argv[]) {
	
	int ladoa, ladob, FA, Fac,  DA, DB, Res, cociente, Cant, suma_v;
	float resultado;
	char IA, IB, inter;
	int Vec[100]
	
	//Cant = cantidad de elementos del vector
	//solo las funciones, faltan los cout y demas ingresos de datos....

	resultado = Hipot(a, b);

	Fac= Facto(FA);

	cociente = Division_entera(DA, DB, Res);

	inter = Intercambio (IA, IB);

	suma_v = Suma_vector(Vec [], Cant);

	
	cout<< "el resultado de la hipotenusa es: "<< FA; 
	
	
	return 0;
}

float Hipot(int ladoa, int ladob)
{

float resultado = (ladoa*ladoa)+(ladob*ladob)  ;

return sqrt (resultado);

}

int Facto(int FA) {
	int resultado = 1;
	for (int i = FA; i >= 1; i--) {
		resultado *= i;
	}
	return resultado;
}


int Division_entera(int DA, int DB, int &Res)
{
	int resultado;

	resultado = DA/DB;
	
	Res= DA%DB;


	return resultado;
}

void Intercambio(char &IA, char &IB){

	char aux;
	aux = IA;
	IA = IB;
	IB = aux; 
}

int Suma_vector(int Vec[], int Cant){
		int suma=0;

	for (int i=0; i<Cant; i++)
	{
		suma= suma + Vec[i];
	}
	return (suma);
}