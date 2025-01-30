#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	string personas[2];
	int i; 
	
	for (i=0;i<2 ; i++) {
		cout << "Ingrese persona que adquirio el bono: ";
		getline(cin, personas[i]);
	}
	
	cout << "Num Bono   Persona que lo adquirió"<<endl;
	
	for (i=0;i<2 ; i++) {
		
		cout <<"    "<<i+1<<"        "<<personas[i]<<endl;
	}
	return 0;
}
