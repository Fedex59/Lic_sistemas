#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	string palabra[1000];
	int n , i; 
	
	cout << "Ingrese de cuantas palabras estamos hablando: ";
	cin >> n;
	
	for (i=0;i<n ; i++) {
		cout << "Ingrese la palabra: ";
		cin >> palabra[i];
	}
	
	for (i=0;i<n ; i++) {
		cout<<" " <<palabra[i];
	}
	cout<<endl;
	for (i=n;i>=0;i--) {
		cout<<" " <<palabra[i];
	}
	
	return 0;
}
