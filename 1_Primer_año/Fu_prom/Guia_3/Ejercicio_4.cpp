#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num1, num2, i; 
	cout<< "Ingrese el valor del primer numero ";
	cin>> num1;
	cout<< "Ingrese el valor del primer numero ";
	cin>> num2;
	
	while (num1 >= num2) {
		cout << "El primer número debe ser menor que el segundo. Inténtelo de nuevo." << endl;
		cout << "Ingrese el primer número: ";
		cin >> num1;
		cout << "Ingrese el segundo número: ";
		cin >> num2;
	}
	cout<<num1  << endl;
	
	for (i=num1;i<num2;i++){
		
		num1++;
		
		cout<<num1  << endl;
	}
	
	return 0;
}