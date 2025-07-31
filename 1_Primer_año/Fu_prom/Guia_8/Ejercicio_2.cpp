#include <fstream>
#include <iostream>
using namespace std;

// Prototipo de función
void LeerArchivo(string datos[][6], int &cantFilas);

int main() {
    const int MAX_FILAS = 100;
    string datos[MAX_FILAS][6];
    int cantFilas = 0;

    LeerArchivo(datos, cantFilas);

    // Mostrar lo leído
    cout << "Datos leídos del archivo:\n";
    for (int i = 0; i < cantFilas; i++) {
        for (int j = 0; j < 6; j++) {
            cout << datos[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

// Función que lee el archivo y guarda en la matriz
void LeerArchivo(string datos[][6], int &cantFilas) {
    
    ifstream archivo("prueba.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        cantFilas = 0;
        return;
    }

    string linea;
    int fila = 0, columna = 0;

    while (getline(archivo, linea)) {
        datos[fila][columna] = linea;
        columna++;

        if (columna == 6) {
            columna = 0;
            fila++;
        }
    }

    cantFilas = fila;

    archivo.close();
}