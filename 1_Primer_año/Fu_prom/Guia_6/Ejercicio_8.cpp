#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) 
{
	int  num[100][3], n, i, i2, band, cont;
	int  aprob[100], pos, j, num2, aprobados;
	float prom[100], promedio;
	
	aprobados=0;
	cont=0;
	
	cout<<"Ingrese la cantidad de Alumnos: ";
	cin>>n;
	
	for (i=0; i<n; i++) {
		cout << "Ingrese el dni del alumno: ";
		cin >> num[i][0];
		cout << "Ingrese la nota del 1º semestre: ";
		cin >> num[i][1];
	}
	
	for (i=0; i<n; i++) {
		cout << "Ingrese el dni del alumno a buscar: ";
		cin >> num2;
		
		i2=0;
		
		while (i2 < n)
		{
			if (num[i2][0] == num2)
			{band=1;
			pos=i2;
			i2=n;
			}
			i2++;
		}
		
			cout << "Ingrese la nota del 2º semestre: ";
			cin >> num[pos][2];
				
	}
	
	for (i=0; i<n; i++) {
		
		promedio = num[i][1]+num[i][2];
		prom[i] = (promedio/2);
		
		if (prom[i] >= 6)
		{
			aprob[aprobados]=num[i][0];
			aprobados ++;
		}	
		else 
			cont++;
	}
	
	
	for (i=0; i<n; i++) {
		cout << "Alumno: " <<num[i][0] <<endl;
		cout << "Nota 1: "<< num[i][1]<<" ";
		cout << "Nota 2: "<< num[i][2]<<" ";
		cout << "Promedio "<<prom[i];
		cout << endl;
	}
	cout << "alumnos aprobados :";
	for (i=0; i<aprobados; i++)
		cout << aprob[aprobados]<<endl;
	
	cout<< "La cantidad de alumnos que no aprobaron fueron: "<<cont;
	
	
	return 0;
}