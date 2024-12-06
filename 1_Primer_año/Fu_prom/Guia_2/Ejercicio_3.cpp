#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
	string Nombre1, Nombre2, Nombre3; 
	cout<< "Ingrese el primer nombre ";
	cin>> Nombre1;
	cout<< "Ingrese el Segundo nombre ";
	cin>> Nombre2;
    cout<< "Ingrese el Tercer nombre ";
	cin>> Nombre3;
	
	if (Nombre1 > Nombre2) 
	{
	swap(Nombre1, Nombre2);
	}
	if (Nombre2 > Nombre3)
	{
		swap(Nombre2, Nombre3);
    }
   if (Nombre1 > Nombre2)
    {
        swap(Nombre1, Nombre2);
    }    
	cout << "Los nombres en orden alfabético son: " << endl;
    cout << Nombre1 << endl;
    cout << Nombre2 << endl;
    cout << Nombre3 << endl;

    return 0;
}
