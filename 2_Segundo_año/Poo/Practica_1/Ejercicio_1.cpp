#include <iostream>
using namespace std;

void doble(int vec[], int m); // Prototipo

int main() {
    int m, num[10];

    cout << "Ingrese la cantidad de números: ";
    cin >> m;

    for (int i = 0; i < m; i++) {
        cout << "Ingrese el número: ";
        cin >> num[i];
    }

    cout << "Los números son: "<< endl;
    for (int i = 0; i < m; i++) {
        cout << num[i] << endl;
    }

    // Llamamos a la función que los multiplica por 2
    doble(num, m);

    cout << "El doble de los números es: "<< endl;
    for (int i = 0; i < m; i++) {
        cout << num[i] << endl;
    }

    return 0;
}

// Función que multiplica por 2
void doble(int vec[], int m) {
    for (int i = 0; i < m; i++) {
        vec[i] = vec[i] * 2;
    }
}