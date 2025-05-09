#include <iostream>
#include <string>

// Definición de la struct
struct Persona {
    std::string nombre;
    int edad;
    std::string direccion;
};

int main() {
    // Crear una instancia de la struct
    Persona persona1;

    // Asignar valores a los miembros de la struct
    persona1.nombre = "Juan Perez";
    persona1.edad = 30;
    persona1.direccion = "Calle Falsa 123";

    // Imprimir los valores de los miembros de la struct
    std::cout << "Nombre: " << persona1.nombre << std::endl;
    std::cout << "Edad: " << persona1.edad << std::endl;
    std::cout << "Direccion: " << persona1.direccion << std::endl;

    return 0;
}