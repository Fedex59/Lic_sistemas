#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Numero, i; 
	cout<< "Ingrese el valor del primer numero ";
	cin>> Numero;
	
	for (i=0;i<=10;i++){
		cout<< "La tabla " <<Numero <<" x " <<Numero * i<< endl;
	}
	return 0;
}
