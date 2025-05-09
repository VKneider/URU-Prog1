// Escribe un programa para saber si un numero ingresado por teclado es par o impar

#include <iostream>
using namespace std;

int main() {
    // Declaración de variable
    int numero;

    // Ingreso de datos por parte del usuario
    cout << "Ingrese un número: ";
    cin >> numero;

    // Condicional para saber si el número es par o impar
    if (numero % 2 == 0) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }

    return 0;
}