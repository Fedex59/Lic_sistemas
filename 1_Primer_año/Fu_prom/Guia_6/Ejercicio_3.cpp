#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int  lista[100][2], i, band=0, dat, pos, n;
		
	cout<<"Ingrese la cantidad de clientes que tiene la lista: ";
	cin>>n;
	
    for (i=0; i<n; i++) {
		cout << "Ingrese el numero de cliente: ";
		cin >> lista[i][0];
        cout << "Ingrese la deuda que posee ";
		cin >> lista[i][1];
	}

	i=0;

	while (i < n)
	{
		if (lista[i] [0]== dat)
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