#include <iostream>
#include <string>
#include <windows.h>

struct Persona {
    std::string nombre;
    int edad;
    std::string direccion;
};

void mostrarTitulo() {
    std::cout << "=============================\n";
    std::cout << "   GESTION DE PERSONAS\n";
    std::cout << "=============================\n";
}

void cambiarColorTexto(const std::string& color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (color == "rojo") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    } else if (color == "verde") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    } else if (color == "azul") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    } else if (color == "amarillo") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    } else if (color == "blanco") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    } else {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
}

void agregarPersona(Persona personas[], int &numPersonas, int maxPersonas) {
    if (numPersonas >= maxPersonas) {
        cambiarColorTexto("rojo");
        std::cout << "\nNo se pueden agregar más personas.\n";
        cambiarColorTexto("blanco");
        system("pause");
        return;
    }

    std::cout << "\nIngrese los datos de la persona:\n";
    std::cout << "Nombre: ";
    std::cin.ignore();
    std::getline(std::cin, personas[numPersonas].nombre);
    std::cout << "Edad: ";
    std::cin >> personas[numPersonas].edad;
    std::cin.ignore();
    std::cout << "Direccion: ";
    std::getline(std::cin, personas[numPersonas].direccion);

    numPersonas++;
    cambiarColorTexto("verde");
    std::cout << "\nPersona agregada exitosamente.\n";
    cambiarColorTexto("blanco");
    system("pause");
}

void mostrarPersonas(const Persona personas[], int numPersonas) {
    if (numPersonas == 0) {
        cambiarColorTexto("rojo");
        std::cout << "\nNo hay personas para mostrar.\n";
        cambiarColorTexto("blanco");
        system("pause");
        return;
    }

    for (int i = 0; i < numPersonas; ++i) {
        cambiarColorTexto("amarillo");
        std::cout << "\nPersona " << i + 1 << ":\n";
        cambiarColorTexto("blanco");
        std::cout << "Nombre: " << personas[i].nombre << "\n";
        std::cout << "Edad: " << personas[i].edad << "\n";
        std::cout << "Direccion: " << personas[i].direccion << "\n";
        std::cout << "--------------------------\n";
    }
    system("pause");
}

void mostrarPersonaMenorEdad(const Persona personas[], int numPersonas) {
    if (numPersonas == 0) {
        cambiarColorTexto("rojo");
        std::cout << "\nNo hay personas para mostrar.\n";
        cambiarColorTexto("blanco");
        system("pause");
        return;
    }

    int menorEdad = personas[0].edad;
    for (int i = 1; i < numPersonas; ++i) {
        if (personas[i].edad < menorEdad) {
            menorEdad = personas[i].edad;
        }
    }

    cambiarColorTexto("verde");
    std::cout << "\nPersonas con la menor edad:\n";
    cambiarColorTexto("blanco");
    for (int i = 0; i < numPersonas; ++i) {
        if (personas[i].edad == menorEdad) {
            std::cout << "Nombre: " << personas[i].nombre << "\n";
            std::cout << "Edad: " << personas[i].edad << "\n";
            std::cout << "Direccion: " << personas[i].direccion << "\n";
            std::cout << "--------------------------\n";
        }
    }
    system("pause");
}

void mostrarPersonaMayorEdad(const Persona personas[], int numPersonas) {
    if (numPersonas == 0) {
        cambiarColorTexto("rojo");
        std::cout << "\nNo hay personas para mostrar.\n";
        cambiarColorTexto("blanco");
        system("pause");
        return;
    }

    int mayorEdad = personas[0].edad;
    for (int i = 1; i < numPersonas; ++i) {
        if (personas[i].edad > mayorEdad) {
            mayorEdad = personas[i].edad;
        }
    }

    cambiarColorTexto("verde");
    std::cout << "\nPersonas con la mayor edad:\n";
    cambiarColorTexto("blanco");
    for (int i = 0; i < numPersonas; ++i) {
        if (personas[i].edad == mayorEdad) {
            std::cout << "Nombre: " << personas[i].nombre << "\n";
            std::cout << "Edad: " << personas[i].edad << "\n";
            std::cout << "Direccion: " << personas[i].direccion << "\n";
            std::cout << "--------------------------\n";
        }
    }
    system("pause");
}

void mostrarPromedioEdades(const Persona personas[], int numPersonas) {
    if (numPersonas == 0) {
        cambiarColorTexto("rojo");
        std::cout << "\nNo hay personas para calcular el promedio de edades.\n";
        cambiarColorTexto("blanco");
        system("pause");
        return;
    }

    int sumaEdades = 0;
    for (int i = 0; i < numPersonas; ++i) {
        sumaEdades += personas[i].edad;
    }

    float promedio = static_cast<float>(sumaEdades) / numPersonas;

    cambiarColorTexto("verde");
    std::cout << "\nEl promedio de las edades es: " << promedio << "\n";
    cambiarColorTexto("blanco");
    std::cout << "--------------------------\n";
    system("pause");
}

void menu() {
    mostrarTitulo();
    std::cout << "Menu de opciones:\n";
    std::cout << "1. Agregar persona\n";
    std::cout << "2. Mostrar personas\n";
    std::cout << "3. Mostrar persona con menor edad\n";
    std::cout << "4. Mostrar persona con mayor edad\n";
    std::cout << "5. Mostrar promedio de edades\n";
    std::cout << "6. Salir\n";
    std::cout << "Seleccione una opcion: ";
}

int main() {
    const int MAX_PERSONAS = 10;
    Persona personas[MAX_PERSONAS];
    int numPersonas = 0;
    int opcion;

    do {
        system("cls");
        menu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                agregarPersona(personas, numPersonas, MAX_PERSONAS);
                break;
            case 2:
                mostrarPersonas(personas, numPersonas);
                break;
            case 3:
                mostrarPersonaMenorEdad(personas, numPersonas);
                break;
            case 4:
                mostrarPersonaMayorEdad(personas, numPersonas);
                break;
            case 5:
                mostrarPromedioEdades(personas, numPersonas);
                break;
            case 6:
                cambiarColorTexto("azul");
                std::cout << "\nSaliendo del programa.\n";
                cambiarColorTexto("blanco");
                system("pause");
                break;
            default:
                cambiarColorTexto("rojo");
                std::cout << "\nOpcion no valida. Intente de nuevo.\n";
                cambiarColorTexto("blanco");
                system("pause");
        }
    } while (opcion != 6);

    return 0;
}