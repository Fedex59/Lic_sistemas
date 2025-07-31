#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream archivo("prueba.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir" << endl;
        return 1;
    }

       string datos[100][6];

    int fila = 0;
    int columna = 0;
    string linea;

    while (getline(archivo, linea)) {
        datos[fila][columna] = linea;
        columna++;

        if (columna == COLUMNAS) {
            columna = 0;
            fila++;
        }
    }

    archivo.close();

    // Mostrar los datos
    cout << "Datos leídos del archivo:\n";
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << datos[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}