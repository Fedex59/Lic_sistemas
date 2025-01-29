#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num[10], i; 
	
	
	for (i=0;i<10 ; i++) {
		cout << "Ingrese 10 numeros: ";
		cin >> num[i];
	}
	
	for (i=9;i>=0;i--) {
		cout << "los numeros son: "<<num[i]<<endl;
		}
	
	return 0;
}
