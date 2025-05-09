#include <iostream>
#include <string>

struct Persona {
    std::string nombre;
    int edad;
    std::string direccion;
};

struct ComidaPorPersonaParaFiesta {
    std::string comida;
    Persona persona;
    float totalGastado;
};

int main() {
    const int NUM_PERSONAS = 3;
    ComidaPorPersonaParaFiesta fiesta[NUM_PERSONAS];
    double totalGastadoPorTodos = 0;

    // Solicitar datos de las personas y la comida
    for (int i = 0; i < NUM_PERSONAS; ++i) {
        std::cout << "Ingrese los datos de la persona " << i + 1 << ":\n";
        std::cout << "Nombre: ";
        std::getline(std::cin, fiesta[i].persona.nombre);
        std::cout << "Edad: ";
        std::cin >> fiesta[i].persona.edad;
        std::cin.ignore(); // Ignorar el salto de línea después de la edad
        std::cout << "Direccion: ";
        std::getline(std::cin, fiesta[i].persona.direccion);
        std::cout << "Ingrese la comida que traerá: ";
        std::getline(std::cin, fiesta[i].comida);
        std::cout << std::endl;
        std::::cout << "Ingrese el total gastado: ";
        std::cin >> fiesta[i].totalGastado;
        std::cout << std::endl;
    }

    // Imprimir los datos
    std::cout << "Datos de la fiesta:\n";
    for (int i = 0; i < NUM_PERSONAS; ++i) {
        std::cout << "Persona " << i + 1 << ":\n";
        std::cout << "Nombre: " << fiesta[i].persona.nombre << "\n";
        std::cout << "Edad: " << fiesta[i].persona.edad << "\n";
        std::cout << "Direccion: " << fiesta[i].persona.direccion << "\n";
        std::cout << "Comida: " << fiesta[i].comida << "\n";
        std::cout << "--------------------------\n";
        totalGastadoPorTodos += fiesta[i].totalGastado;
    }
    std::cout << "Total gastado por todos: " << totalGastadoPorTodos << "\n";

    return 0;
}