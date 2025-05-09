#include <iostream> // Biblioteca para entrada y salida

int main() {
    // Declaración de variables
    int entero = 42; // Variable entera
    double decimal = 3.14159; // Variable de punto flotante
    char caracter = 'A'; // Variable de tipo carácter

    // Imprimir variables
    std::cout << "De tipo Entero: " << entero << std::endl; // Imprime el valor de la variable entera
    std::cout << "De tipo Decimal: " << decimal << std::endl; // Imprime el valor de la variable decimal
    std::cout << "De tipo Caracter: " << caracter << std::endl; // Imprime el valor de la variable carácter

    // SALTOS DE LÍNEA EN C++
    std::cout << "Hola\n"; // Salto de línea, pero no vacía el búfer
    std::cout << "Mundo" << std::endl; // Salto de línea y vacía el búfer

    // El salto de líneas se suele realizar con std::endl, considerado buena práctica.

    // Retornar 0 para indicar que el programa terminó correctamente
    return 0;
}