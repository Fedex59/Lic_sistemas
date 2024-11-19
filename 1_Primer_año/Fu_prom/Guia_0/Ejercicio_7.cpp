#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Edad; 
	float Puls;
	cout<< "Ingrese la edad de la persona ";
	cin>>Edad;
	Puls=(220-Edad)/10;
	cout <<"El num de pulsaciones cada 10 seg son: " << Puls;
	
	
	return 0;
}