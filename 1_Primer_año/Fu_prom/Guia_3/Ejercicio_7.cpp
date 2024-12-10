#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num1, num2 = 1, i; 
	cout << "Ingrese el valor del numero: ";
	cin >> num1;
	

	while (num1 < 0) {
		cout << "El número debe ser entero positivo." << endl;
		cout << "Ingrese el número: ";
		cin >> num1;
	}
	
	
	for (i = 1; i <= num1; i++) {
		num2 = num2 * i;
	}
	
	cout << "El factorial es: " << num2 << endl;
	
	return 0;
}