#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num[1000],n , i, pos; 
	
	cout << "Ingrese de cuantos numeros estamos hablando: ";
		cin >> n;
	
    for (i=0;i<n ; i++) {
		cout << "Ingrese la posicion: ";
		cin >> pos;
        cout << "Ingrese el numeros: ";
		cin >> num[pos];
	}
	for (i=0;i<n ; i++) {
		cout << "Los numeros son: "<<num[i]<<endl;
		}
	return 0;
}