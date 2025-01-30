#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num[3][3], i, j, n; 
	
	for (i=0;i<3 ; i++) {
		cout << "Ingrese los 3 numeros de la fila "<<i+1<<": "<<endl;
		for (j=0;j<3 ; j++) {
			cin >> num[i][j];
		}
	}
	
	cout << "Los la fila a mostrar: ";
		cin>>n;
		
	cout << "Los numeros la fila son:";
	for (i=0;i<3;i++) {
		cout <<num[n-1][i]<<" ";
	}
	return 0;
}
