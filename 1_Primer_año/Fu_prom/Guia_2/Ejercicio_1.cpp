#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Numero1, Numero2; 
	cout<< "Ingrese el valor del primer numero ";
	cin>> Numero1;
	cout<< "Ingrese el valor del segundo numero ";
	cin>> Numero2;
	
	if (Numero1 > Numero2) 
	{
		cout <<"Los numeros en orden son" << Numero1 <<" " << Numero2;
	}
	else
	{
		cout <<"Los numeros en orden son " << Numero2 <<" " << Numero1;
	}    
	
    return 0;
}
