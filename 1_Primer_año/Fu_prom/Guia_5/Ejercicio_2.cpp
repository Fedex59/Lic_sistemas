#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num[10], i, max, min, par, valor, pos; 
	
	par=0, max=0;
	min = 1000;
	
	for (i=0;i<10 ; i++) {
		
		cout << "Ingrese 10 numeros: ";
		cin >> num[i];
	}
	
	for (i=0;i<10 ; i++) {
		 if (num[i] % 2 == 0) {
			par++;
		 }
	}
	
	for (i=0;i<10 ; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	
	for (i=0;i<10 ; i++) {
		if (num[i] < min) {
			min = num[i];
		}
	}
	cout << "La cantidad de numeros pares es: "<<par<<endl;
	cout << "el valor maximo es : "<<max<<endl;
	cout << "el valor minimo es : "<<min<<endl;
	cout << "el valor a buscar :";
	cin>>valor;
	for (i=0;i<10 ; i++) {
		if (num[i] == valor) {
			cout << "el valor se encuentra en la posicion : "<<i<<endl;
			break;
		}
			
	}
		
	return 0;
}
