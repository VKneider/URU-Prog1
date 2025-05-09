#include <iostream>
using namespace std;

int main() {
    // Declaración de un arreglo de doubles para almacenar las edades de 5 personas
    double edades[5];

    // Pedir al usuario que ingrese las edades
    cout << "Ingrese las edades de 5 personas:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Edad de la persona " << i + 1 << ": ";
        cin >> edades[i];
    }

    // Calcular y mostrar la suma y el promedio de las edades
    double suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += edades[i];
    }
    double promedio = suma / 5;

    cout << "\nLa suma de las edades es: " << suma << endl;
    cout << "El promedio de las edades es: " << promedio << endl;

    // Buscar y mostrar la edad más alta
    double edadMaxima = edades[0];
    for (int i = 1; i < 5; i++) {
        if (edades[i] > edadMaxima) {
            edadMaxima = edades[i];
        }
    }
    cout << "La edad más alta es: " << edadMaxima << endl;

    return 0;
}