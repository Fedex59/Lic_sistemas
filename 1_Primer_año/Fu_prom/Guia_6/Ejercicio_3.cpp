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
	cout<<"Ingrese el cliente a buscar ";
	cin>>dat;

	i=0;
	while (i < n)
	{
		if (lista[i][0] == dat)
		{ band=1;
		pos=i;
		i=n;
		}
		i++;
	}
	
	
	if (band == 0)
		cout<<"Cliente Inexistente";
	
	else 
	{
			
			cout<<"El cliente " << lista[pos][0]<<" tiene una deuda de : " <<lista[pos][1];
	}
		return 0;
}