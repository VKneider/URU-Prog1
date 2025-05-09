#include <iostream>
using namespace std;

int main() {
    // Declarar variables para la matriz
    const int FILAS = 3; // Número de filas
    const int COLUMNAS = 3; // Número de columnas
    int matriz[FILAS][COLUMNAS]; // Declaración de la matriz
    int suma = 0; // Variable para almacenar la suma de los elementos

    // Solicitar al usuario que ingrese los valores de la matriz
    cout << "Ingrese los elementos de una matriz de " << FILAS << "x" << COLUMNAS << ":" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            suma += matriz[i][j]; // Acumular la suma de los elementos
        }
    }

    // Mostrar la matriz ingresada
    cout << "\nMatriz ingresada:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Mostrar el resultado de la suma
    cout << "\nLa suma de todos los elementos de la matriz es: " << suma << endl;

    return 0;
}
