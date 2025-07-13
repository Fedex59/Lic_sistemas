#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) 
{
	int  num[100][3], n, i, j, aux, i2;
	float prom[100], promedio, aux1 ;
	
	cout<<"Ingrese la cantidad de productores: ";
	cin>>n;
	
	
	for (i=0; i<n; i++) {
		cout << "Ingrese el numero de productor: ";
		cin >> num[i][0];
		cout << "Ingrese las cantidades de hectareas: ";
		cin >> num[i][1];
		cout << "Ingrese las toneladas cosechadas: ";
		cin >> num[i][2];
		promedio = num[i][2]/num[i][1];
		prom[i] = promedio;
	}
	
	for (i=0; i<(n-1); i++)
		for (j=i+1; j<n; j++)
	{
			if (num[i][2] < num[j][2])
			{
				aux= num[i][2];
				num[i][2]= num[j][2];
				num[j][2]= aux;
				for (i2=0; i2<2; i2++)
				{
					aux= num[i][i2];
					num[i][i2]= num[j][i2];
					num[j][i2]= aux;
				}
				aux1= prom[i];
				prom[i]= prom[j];
				prom[j]= aux1;
			}
	}
		
		for (i=0; i<n; i++) {
			cout << "el productor: " <<num[i][0] <<endl;
			cout << "Tiene la candidad de hectareas : "<< num[i][1]<<" ";
			cout << "cosecho tonelas por : "<< num[i][2]<<" ";
            cout << "cosecho un promedio de : "<< prom[i]<<" ";
			cout << endl;
		}
		cout << "el productor con mayor rendimiento fue: "<<num[0][0];
		return 0;
}