#include <iostream>
	
	using namespace std;
	
	int main(int argc, char const *argv[]) 
	{
		int  num[100], n, i, j, aux;
		
		cout<<"Ingrese la cantidad de numeros: ";
		cin>>n;
		
		for (i=0; i<n; i++) {
			cout << "Ingrese los numeros: ";
			cin >> num[i];
		}
		
		for (i=0; i<(n-1); i++)
			for (j=i+1; j<n; j++)
		{
				if (num[i] > num[j])
				{
					aux= num[i];
					num[i]= num[j];
					num[j]= aux;
				}
		}
			
			cout <<endl;
			for (i=0; i<n; i++) {
				cout << num[i]<<endl;	     
	}
	return 0;
	}