<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	int num[5],num2[5], i; 
	
	
	for (i=0;i<5 ; i++) {
		cout << "Ingrese 5 numeros: ";
		cin >> num[i];
	}
	for (i=0;i<5 ; i++) {
		num2[i]=num[i]*3;
		}
	for (i=0;i<5 ; i++) {
		cout << "Los numeros multiplicados son: "<<num2[i]<<endl;
		}
	return 0;
}
