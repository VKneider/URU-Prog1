#include <iostream>
using namespace std;

int main() {
    // Inicializamos la variable de la suma en 0
    int suma = 0;

    // Ciclo 'for' para sumar los primeros 10 números
    for (int i = 0; i < 10; i++) {
        suma += i;  // Agrega el valor de i a la suma
    }

    // Imprime el resultado de la suma
    cout << "La suma de los primeros 10 números es: " << suma << endl;

    return 0;
}
