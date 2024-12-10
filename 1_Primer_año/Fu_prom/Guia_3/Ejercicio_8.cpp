#include <iostream>

using namespace std;

int main() 
{
	string nombre1, nombre2;
	
	
	cout << "Ingrese el primer nombre: ";
	cin >> nombre1;
	
	cout << "Ingrese un nombre: ";
	cin >> nombre2;
	
	
	while (nombre1 != nombre2) {
		nombre1=nombre2;
		cout << "Los nombres son distintos. Ingrese otro nombre: ";
		cin >> nombre2;  
	}
	
	cout << "¡Has repetido el nombre " << nombre1 << "!" << endl;
	
	return 0;
}
