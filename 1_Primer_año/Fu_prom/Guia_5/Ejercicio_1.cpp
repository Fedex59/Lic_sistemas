#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num[100], cant, i, pos; 
	
	cout << "Ingrese la cantidad de alumnos: ";
	cin >> cant;
	
	for (i=0;i<cant ; i++) {
		cout << "Ingrese la edad: ";
		cin >> num[i];
	}
	
	cout << "ingrese la posicion del alumno." << endl;
	cin >> pos;
	cout << "la edad es: " <<num [pos] << endl;
	
	while (pos <= cant ) {
		
		cout << "ingrese la posicion del alumno " << endl;
		cin >> pos;
		cout << "la edad es: " <<num[pos] << endl;
	}
	
	return 0;
}