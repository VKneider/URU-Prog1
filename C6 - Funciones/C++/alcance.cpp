#include <iostream>
using namespace std;

// Variable global: accesible desde cualquier parte del programa
int numeroGlobal = 100;

void mostrarAlcance() {
    // Variable local: solo accesible dentro de esta función
    int numeroLocal = 10;

    // Mostramos el valor de las variables
    cout << "Dentro de la función mostrarAlcance:" << endl;
    cout << "Variable Global: " << numeroGlobal << endl;
    cout << "Variable Local: " << numeroLocal << endl;
}

int main() {
    // Variable local del main: solo accesible dentro de main
    int numeroLocalMain = 50;

    cout << "Dentro de la función main:" << endl;
    cout << "Variable Global: " << numeroGlobal << endl;
    cout << "Variable Local de main: " << numeroLocalMain << endl;

    // Llamada a la función mostrarAlcance
    mostrarAlcance();

    // Cambiamos el valor de la variable global
    numeroGlobal = 200;

    cout << "\nDespués de modificar la variable global en main:" << endl;
    cout << "Variable Global: " << numeroGlobal << endl;

    // Llamada adicional a la función mostrarAlcance
    mostrarAlcance();

    return 0;
}