#include <iostream>
#include <array> // Biblioteca para usar std::array
using namespace std;

int main() {
    // **1. Arreglos estilo C**
    // Declaración e inicialización de un arreglo de enteros
    int arregloC[5] = {10, 20, 30, 40, 50};

    // Acceso a elementos del arreglo estilo C
    cout << "Arreglo estilo C:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << arregloC[i] << endl;
    }

    // Modificación de un elemento
    arregloC[2] = 35; // Cambiamos el valor en la posición 2
    cout << "Elemento modificado en la posición 2: " << arregloC[2] << endl;

    // **2. std::array (C++ Arrays)**
    // Declaración e inicialización
    array<int, 5> arregloCpp = {1, 2, 3, 4, 5};

    // Acceso a elementos utilizando un bucle
    cout << "\nstd::array en C++:" << endl;
    for (int i = 0; i < arregloCpp.size(); i++) {
        cout << "Elemento " << i << ": " << arregloCpp[i] << endl;
    }

    // Uso de métodos en std::array
    cout << "\nMétodos de std::array:" << endl;
    cout << "Tamaño del arreglo: " << arregloCpp.size() << endl;
    cout << "Primer elemento: " << arregloCpp.front() << endl;
    cout << "Último elemento: " << arregloCpp.back() << endl;

    // Modificar elementos con at()
    cout << "Valor en la posición 1 antes de modificar: " << arregloCpp.at(1) << endl;
    arregloCpp.at(1) = 20; // Cambiamos el valor en la posición 1
    cout << "Valor en la posición 1 después de modificar: " << arregloCpp.at(1) << endl;

    // **3. Comparación entre std::array y arreglos estilo C**
    cout << "\nComparación entre std::array y arreglos estilo C:" << endl;
    cout << "- std::array tiene métodos útiles como size(), at(), front(), back()." << endl;
    cout << "- Los arreglos estilo C son más básicos y no tienen métodos incorporados." << endl;

    // **4. Inicialización parcial y automática**
    // Arreglo estilo C con inicialización parcial
    int parcialC[5] = {10, 20}; // Los valores restantes se inicializan a 0
    cout << "\nInicialización parcial de arreglo estilo C:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << parcialC[i] << endl;
    }

    // Arreglo estilo C con tamaño deducido automáticamente
    int deducidoC[] = {1, 2, 3, 4, 5};
    cout << "\nArreglo estilo C con tamaño deducido automáticamente:" << endl;
    for (size_t i = 0; i < sizeof(deducidoC) / sizeof(deducidoC[0]); i++) {
        cout << "Elemento " << i << ": " << deducidoC[i] << endl;
    }

    return 0;
}
