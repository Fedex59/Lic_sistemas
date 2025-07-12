#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) 
{
	int  num[100][4], n, i, j, aux, i2;
	float prom[100], promedio, aux1;
	
	cout<<"Ingrese la cantidad de alumnos: ";
	cin>>n;
	
	for (i=0; i<n; i++) {
		cout << "Ingrese los numeros del dni: ";
		cin >> num[i][0];
		cout << "Ingrese la nota del parcial 1: ";
		cin >> num[i][1];
		cout << "Ingrese la nota del parcial 2: ";
		cin >> num[i][2];
		cout << "Ingrese la nota del parcial 3: ";
		cin >> num[i][3];    
		promedio = (num[i][1]+num[i][2]+num[i][3])/3;
		prom[i] = promedio;       
	}
	
	for (i=0; i<(n-1); i++)
		for (j=i+1; j<n; j++)
	{
			if (prom[i] > prom[j])
			{
				aux1= prom[i];
				prom[i]= prom[j];
				prom[j]= aux1;
				for (i2=0; i2<4; i2++)
				{
					aux= num[i][i2];
					num[i][i2]= num[j][i2];
					num[j][i2]= aux;
				}
			}
	}
		
		for (i=0; i<n; i++) {
			cout << "el alumno: " <<num[i][0] <<endl;
			cout << num[i][1]<<" ";
			cout << num[i][2]<<" ";
			cout << num[i][3]<<" ";    
			cout << "promedio de: "<<prom[i] ;
			cout << endl;
		}
			return 0;
		}