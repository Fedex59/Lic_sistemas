#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num[10], i, band=0, dat, pos, n=10;
	
	
	for (i=0;i<10 ; i++) {
		cout << "Ingrese los 10 numeros: ";
		cin >> num[i];
	}
		
	cout<<"Ingrese el dato a buscar: ";
	cin>>dat;
	
	i=0;
	
	while (i < n)
	{
		if (num[i] == dat)
		{ band=1;
		pos=i+1;
		i=n;
		}
		i++;
	}
	
	
	if (band == 0)
		cout<<"El dato no fue hallado";
	
	else cout<<"El dato fue hallado en la posicion "<<pos;

	return 0;
}