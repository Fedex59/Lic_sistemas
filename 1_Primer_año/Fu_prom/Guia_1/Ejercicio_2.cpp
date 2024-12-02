#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int Alto, Largo; 
	float Arena;
	cout<< "Ingrese la altura y el ancho de la pared ";
	cin>> Alto;
	cin>> Largo;
	Arena = (Alto*Largo)/2;
	cout <<"La cantidad de arena necesaria es:" << Arena;
	
	return 0;
}

