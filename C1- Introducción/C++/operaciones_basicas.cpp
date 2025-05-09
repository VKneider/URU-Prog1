// Operaciones aritméticas básicas en C++
// Este programa realiza sumas, restas, multiplicaciones y divisiones básicas.

#include <iostream>

int main() {
    int a = 10, b = 5; // Declaración e inicialización de variables

    // Operaciones aritméticas (Se pueden hacer dentro de un cout si así se desea como en el ejemplo a continuación)
    std::cout << "Suma: " << (a + b) << std::endl;
    std::cout << "Resta: " << (a - b) << std::endl;
    std::cout << "Multiplicación: " << (a * b) << std::endl;
    std::cout << "División: " << (a / b) << std::endl;

    // Operaciones fuera del cout
    int suma = a + b; // Suma
    int resta = a - b; // Resta 
    int multiplicacion = a * b; // Multiplicación
    int division = a / b; // División

    // Imprimir resultados de variables
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;
    std::cout << "División: " << division << std::endl;

    return 0;
}
