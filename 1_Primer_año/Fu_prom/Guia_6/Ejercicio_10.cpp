#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) 
{
	int Venc[25][3], Pago[25][3], n, i, i2, band, cria , pos, j;
	string Clientes[25][3], Cli, Inco[25];
	int FPago, FVenc;
	int A=0, B=0, C=0;
	
    cout << "Ingrese la cantidad de criaderos: ";
		cin >> n;
	cout << "Ingrese el Codigo del criadero: ";
		cin >> cria;

        while (cria != 999)
		{

		cout << "Ingrese tipo de lana: ";
		cin >> lana;

       	i=0;
		while (i < n)
		{
			if (Clientes[i][0] == lana)
			{band=1;
			pos=i;
			i=n;
			}
			i++;
		}
         
		cout << "Numero de documento: ";
		cin >> Clientes[i][1];
		
		
        }


	for (i=0; i<n; i++) {
		cout << "Ingrese el Codigo del cliente: ";
		cin >> Clientes[i][0];
		cout << "Numero de documento: ";
		cin >> Clientes[i][1];
		cout << "Estado A, B o C: ";
		cin >> Clientes[i][2];
	}
	
	for (i=0; i<n; i++) {
		cout << "Ingrese el Codigo del cliente: ";
		cin >> Cli;
		
		i2=0;
		while (i2 < n)
		{
			if (Clientes[i2][0] == Cli)
			{band=1;
			pos=i2;
			i2=n;
			}
			i2++;
		}
		
		cout << "Fecha de pago (aaaa, mm, dd): ";
		cin >> Pago[pos][0];
		cin >> Pago[pos][1];
		cin >> Pago[pos][2];
		
		cout << "Fecha de Vencimiento (aaaa, mm, dd): ";
		cin >> Venc[pos][0];
		cin >> Venc[pos][1];
		cin >> Venc[pos][2];
	}
	
	for (i=0; i<n;i++)
	{
		FVenc = Venc[i][0]*10000 + Venc[i][1]*100 + Venc[i][2];
		FPago = Pago[i][0]*10000 + Pago[i][1]*100 + Pago[i][2];
		
		if (FPago == 0)
		{
			Inco [i] = Clientes[i][0];
			C++;
		}        
		else
			if (FPago>FVenc)
				B++;
			else
				A++;
	}
	cout << "Cliente que pagaron a termino " << A << endl;
	cout << "Cliente que pagaron vencido " << B << endl;
	cout << "Cliente incobrables " << C << " Los cuales son : "<< endl;
	
	for (i=0; i<C; i++)
		cout << Inco [i] ;
	
	return 0;
} 