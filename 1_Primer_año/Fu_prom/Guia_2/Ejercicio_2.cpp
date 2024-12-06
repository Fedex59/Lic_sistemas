#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Numero;
	
	cout<< "Ingrese nn numero ";
	cin>> Numero;
	
	if (Numero > 0) 
	{
		cout << "El número " << Numero << " es positivo" << endl;
	}
	else if (Numero = 0)
	{
		cout << "El número " << Numero << " es cero" << endl;
	}    
	else 
	{ 
		cout << "El número " << Numero << " es negativo" << endl;
	}
	if (Numero % 2 == 0) {
		cout << "El número " << Numero << " es par." << endl;
	} else {
		cout << "El número " << Numero << " es impar." << endl;
	}
	
	if (Numero % 3 == 0 & Numero % 5 == 0) {
		cout << "El número " << Numero << " es divisible por 3 y por 5" << endl;
	} else {
		cout << "El número " << Numero << " no es divisible por 3 y por 5" << endl;
	}
	
	return 0;
}
