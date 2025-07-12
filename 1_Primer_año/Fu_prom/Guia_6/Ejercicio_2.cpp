#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int dni[25], notas[25][3], i, band=0, dat, pos, n=25;
	float prom=0;
		
	cout<<"Ingrese el dni del alumno buscar: ";
	cin>>dat;
	
	//falta cargar notas y dni, pero funciona


	while (i < n)
	{
		if (dni[i] == dat)
		{ band=1;
		pos=i+1;
		i=n;
		}
		i++;
	}
	
	
	if (band == 0)
		cout<<"El dni no fue hallado";
	
	else 
	{
		prom = notas[pos][0]+notas[pos][1]+notas[pos][2];
			prom = prom/3;
			
			cout<<"El promedio de alumno " << dni[pos]<<"Es: " <<pos;
	}
		return 0;
}