#include <iostream> // Biblioteca para entrada y salida
#include <string>   // Biblioteca para trabajar con std::string

using namespace std; // Permite usar los elementos del espacio de nombres std sin el prefijo std::

int main() {
    // Declaración de una variable de tipo string
    string nombre;
    string frase;

    // Uso de cin para leer una palabra (sin espacios)
    cout << "Ingresa tu nombre (sin espacios): ";
    cin >> nombre; // Lee solo hasta el primer espacio
    cout << "Hola, " << nombre << "!" << endl;

    // Uso de cin.ignore() para limpiar el búfer
    cin.ignore(256, '\n');

    // Uso de getline para leer una línea completa (incluyendo espacios)
    cout << "Ingresa una frase completa: ";
    getline(cin, frase); // Lee toda la línea, incluyendo espacios
    cout << "La frase que ingresaste es: \"" << frase << "\"" << endl;

    return 0;
}