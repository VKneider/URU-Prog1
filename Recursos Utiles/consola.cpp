#include <iostream>
#include <windows.h> // Biblioteca para manipular la consola en Windows
using namespace std;

// Función para cambiar el color del texto en la consola
void colorTexto(const string& color) {
    // Obtener el handle de la consola
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Cambiar el color según el nombre del color recibido
    if (color == "rojo") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    } else if (color == "verde") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    } else if (color == "azul") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    } else if (color == "amarillo") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    } else if (color == "blanco") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    } else if (color == "magenta") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    } else if (color == "cyan") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    } else {
        // Color por defecto (gris)
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << "Color no reconocido. Usando color por defecto." << endl;
    }
}

// Función para pausar la consola
void pausarConsola() {
    #ifdef _WIN32
        system("pause"); // Pausa en Windows
    #else
        cout << "Presiona Enter para continuar...";
        cin.ignore();
        cin.get(); // Pausa en sistemas Unix/Linux/Mac
    #endif
}

int main() {
    string color;

    // Solicitar al usuario un color
    cout << "Ingresa un color (rojo, verde, azul, amarillo, blanco, magenta, cyan): ";
    cin >> color;

    // Cambiar el color del texto
    colorTexto(color);

    // Mostrar un mensaje con el color seleccionado
    cout << "Este texto está en color " << color << "." << endl;

    // Restaurar el color por defecto
    colorTexto("blanco");

    // Pausar la consola antes de salir
    pausarConsola();

    return 0;
}