#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int numeroEntero;
    float numeroDecimal;

    // Explicación e ingreso de datos
    cout << "Por favor, ingrese un número entero: ";
    cin >> numeroEntero;  // 'cin' lee un valor del usuario y lo almacena en 'numeroEntero'

    cout << "Por favor, ingrese un número decimal: ";
    cin >> numeroDecimal;  // 'cin' lee un valor del usuario y lo almacena en 'numeroDecimal'

    // Mostrar los valores ingresados
    cout << "El número entero ingresado es: " << numeroEntero << endl;
    cout << "El número decimal ingresado es: " << numeroDecimal << endl;

    return 0;
}
