#include <iostream>
using namespace std;

int main() {
    char repetir;  // Variable para almacenar la respuesta del usuario
    int numero1, numero2, suma;  // Variables para los números y su suma

    do {
        // Solicitar al usuario que ingrese dos números
        cout << "Ingresa el primer número: ";
        cin >> numero1;
        cout << "Ingresa el segundo número: ";
        cin >> numero2;

        // Realizar la suma de los dos números
        suma = numero1 + numero2;

        // Mostrar el resultado
        cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;

        // Preguntar al usuario si desea repetir el proceso
        cout << "¿Deseas realizar otra suma? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');  // Condición para repetir el proceso

    cout << "Gracias por usar el programa. ¡Hasta luego!" << endl;

    return 0;
}
