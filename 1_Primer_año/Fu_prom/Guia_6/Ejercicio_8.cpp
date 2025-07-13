//9) En una escuela secundaria se quiere realizar el cierre de notas de los alumnos en matemáticas de
//una comisión, para ello se ingresa al inicio dni y nota del 1º semestre, de los N alumnos de la misma,
//ordenados por dni. El valor N se ingresa como primer dato.
//Luego se ingresan las notas del 2º semestre: dni y nota, sin tener un orden en especial.
//Se desea obtener:
//a) Un listado con los dni y la nota total de cada alumno (promedio entre el 1º y el 2º semestre)
//b) Cuantos alumnos no aprobaron el curso (promedio menor a 6)
//c) Un listado ordenado en forma decreciente por nota total obtenida sólo con los alumnos que aprobaron el curso.

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) 
{
	int  num[100][3], n, i, i2, band;
	int  aprob[100], pos, j, aux, num2, aprobados;
	float prom[100], promedio, aux1, cont ;
	
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
		}
		if (num2 == 0)
			cout<<"Alumno Inexistente";
		
		else 
		{
			cout << "Ingrese la nota del 2º semestre: ";
			cin >> num[i2][2];
		}
		
		for (i=0; i<n; i++) {
			
			promedio = num[i][1]*num[i][2];
			prom[i] = promedio/2;
			
			if (prom[i] < 6)
				cont++;
			else 
			{
				aprob[aprobados]=num[i][0];
					aprobados ++;
			}
			
		}
	}
		
		for (i=0; i<n; i++) {
			cout << "Alumno: " <<num[i][0] <<endl;
			cout << "Nota 1: "<< num[i][1]<<" ";
			cout << "Nota 2: "<< num[i][2]<<" ";
			cout << "Promedio "<<prom[i];
			cout << endl;
		}
		cout<< "La cantidad de alumnos que no aprobaron fueron: "<<cont;
		
		
		return 0;
	}