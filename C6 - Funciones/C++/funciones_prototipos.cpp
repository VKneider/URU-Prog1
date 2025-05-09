#include <iostream>
using namespace std;

// Prototipos de las funciones
bool esPar(int numero);
int doble(int numero);
int triple(int numero);


// Función main
int main() {
    // Declaración de variables
    int numero;

    // Pedir al usuario que ingrese un número
    cout << "Ingrese un número entero: ";
    cin >> numero;  // Leer el número introducido por el usuario

    // Verificar si el número es par utilizando la función esPar
    if (esPar(numero)) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }

    // Calcular el doble y el triple del número usando las funciones doble y triple
    int resultadoDoble = doble(numero);  // Llamada a la función doble
    int resultadoTriple = triple(numero);  // Llamada a la función triple

    // Mostrar los resultados
    cout << "El doble de " << numero << " es: " << resultadoDoble << endl;
    cout << "El triple de " << numero << " es: " << resultadoTriple << endl;

    return 0;
}

bool esPar(int numero) {
    return (numero % 2 == 0);  // Si el número dividido entre 2 tiene residuo 0, es par
}

int doble(int numero) {
    return numero * 2;  // Retorna el número duplicado
}


int triple(int numero) {
    return numero * 3;  // Retorna el número triplicado
}
