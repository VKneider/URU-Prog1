#include <iostream>
#include <windows.h> // Para usar la función system("cls") en Windows
using namespace std;

// Función para limpiar la pantalla (en sistemas Windows)
void limpiarPantalla() {
    system("cls"); // En Windows, limpia la pantalla de la consola
}

// Función para pausar la ejecución hasta que el usuario presione una tecla
void pausar() {
    system("pause"); // Pausa la ejecución del programa
}

// Función para preguntar si desea repetir un proceso
bool deseaRepetir() {
    char respuesta;
    cout << "¿Desea repetir? (s/n): ";
    cin >> respuesta;
    return (respuesta == 's' || respuesta == 'S'); // Retorna true si responde 's' o 'S'
}

int main() {
    // Mostrar un mensaje y preguntar si el usuario quiere repetir el proceso
    cout << "Este es un ejemplo de cómo limpiar la pantalla y pausar la ejecución." << endl;

    // Pausar la ejecución (función pausar)
    pausar();
    // Limpiar la pantalla (función limpiarPantalla)
    limpiarPantalla();

    bool repetir;

    do{
        repetir = deseaRepetir();
        pausar();
        limpiarPantalla();
    }while(repetir);
    
 

    // Preguntar si desea repetir el proceso
    

    return 0;
}
