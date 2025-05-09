#include <iostream>
#include <string> // Para manejar cadenas de texto
using namespace std;

int main() {
    // Declaración de variables
    int edad;
    string licencia;

    // Ingreso de datos por parte del usuario
    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "¿Tiene licencia de conducir? (s/n): ";
    cin >> licencia;

    // Condicional simple para la edad
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    // Evaluamos la licencia (convertimos 's' a true y 'n' a false)
    bool tieneLicencia = (licencia == "s" || licencia == "S");

    // Condicionales con AND (&&) y OR (||)
    if (edad >= 18 && tieneLicencia) {
        cout << "Eres mayor de edad y tienes licencia de conducir." << endl;
    } else if (edad < 18 && tieneLicencia) {
        cout << "Eres menor de edad, pero tienes licencia de conducir." << endl;
    } else if (edad >= 18 || tieneLicencia) {
        cout << "Eres mayor de edad o tienes licencia de conducir." << endl;
    } else {
        cout << "No eres mayor de edad ni tienes licencia de conducir." << endl;
    }

    return 0;
}
