#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) 
{
	int  num[100][3], n, i, j, aux, i2;
	float ext[100], extras, aux1, hora;
	
	cout<<"Ingrese la cantidad de Empleados: ";
	cin>>n;
	cout<<"Ingrese el valor de la hora de trabajo: ";
	cin>>hora;

	for (i=0; i<n; i++) {
		cout << "Ingrese el numero de empleado: ";
		cin >> num[i][0];
		cout << "Ingrese las horas de trabajo: ";
		cin >> num[i][1];
		cout << "Ingrese las horas extras: ";
        cin >> num[i][2];
		extras = hora*2;
		extras = extras*num[i][2];
        ext[i]= extras;
	}
	
	for (i=0; i<(n-1); i++)
		for (j=i+1; j<n; j++)
	{
			if (ext[i] < ext[j])
			{
				aux1= ext[i];
				ext[i]= ext[j];
				ext[j]= aux1;
				for (i2=0; i2<3; i2++)
				{
					aux= num[i][i2];
					num[i][i2]= num[j][i2];
					num[j][i2]= aux;
				}
			}
	}
		
		for (i=0; i<n; i++) {
			cout << "el empleado: " <<num[i][0] <<endl;
			cout << "trabajo las horas : "<< num[i][1]<<" ";
			cout << "las horas extras fueron : "<< num[i][2]<<" ";
			cout << "el sueldo final es de: "<<ext[i];
			cout << endl;
		}
			return 0;
		}