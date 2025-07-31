// Se ingresan los DNI y las edades de los miembros de una asociación cooperadora. El fin de
// datos está dado por edad = 200. Determinar el integrante de mayor edad e informar su DNI
// con una leyenda alusiva.
// Validar la entrada de los datos correspondientes a las edades, las cuales deben estar entre
// los 12 y los 90 años, con una función llamada validar_edad() en base a la cual, al
// verificarse una edad fuera del rango, se debe indicar un mensaje de error y permitir el
// reingreso del dato.

#include <iostream>

using namespace std;

bool validar_edad(int Edad);

int main(int argc, char *argv[]) {

    int Edad; 

   do {
        cout << "Ingrese la edad: ";
        cin >> Edad;

        if (!ValidarEdad(edad)) {

            cout << "Edad inválida. Por favor, intente nuevamente." << endl;
        }
    } while (!ValidarEdad(edad));  

    
    cout << "Edad aceptada: " << edad << endl;

    }
	return 0;
}


bool validar_edad(int Edad){
    
    return (Edad>>12 && Edad<<90)
}