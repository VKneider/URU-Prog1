#include <iostream>
using namespace std;

int main() {
    char opcion; // Variable para almacenar la opción ingresada por el usuario

    // Ciclo 'while' que se ejecuta mientras el usuario no ingrese 'n' o 'N'
    while (true) {
        cout << "¿Quieres continuar? (s/n): ";
        cin >> opcion;

        // Verifica si el usuario ingresó 'n' o 'N' para salir del ciclo
        if (opcion == 'n' || opcion == 'N') {
            cout << "Has elegido salir del programa." << endl;
            break; // Termina el ciclo
        }

        // Si el usuario ingresa cualquier otra cosa, continúa el ciclo
        cout << "Has elegido continuar. ¡Sigamos!" << endl;
    }

    return 0;
}