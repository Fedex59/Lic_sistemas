#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num[4][4], i, j, n, n2, aux; 
	
	for (i=0;i<4 ; i++) {
		cout << "Ingrese los 4 numeros de la fila "<<i+1<<": "<<endl;
		for (j=0;j<4 ; j++) {
			cin >> num[i][j];
		}
	}
	
	cout << "la primer fila a cambiar: ";
	cin>>n;
	n--;
	cout << "la segunda fila a cambiar: ";
	cin>>n2;
	n2--;
	
	for (int j = 0; j < 4; j++) {
		int aux = num[n][j];
		num[n][j] = num[n2][j];
		num[n2][j] = aux;
	}
	
	cout << "Los numeros la matriz cambiada son:";
	for (i=0;i<4 ; i++) {
		cout <<endl;
		for (j=0;j<4 ; j++) {
			cout << num[i][j]<<" ";
		}
	}

return 0;
}

