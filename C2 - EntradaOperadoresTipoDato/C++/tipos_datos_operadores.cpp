#include <iostream>

int main() {
    // Tipos básicos de datos
    char letra = 'A';          // Tipo de dato 'char'
    int numeroEntero = 10;     // Tipo de dato 'int'
    float numeroDecimal = 3.14; // Tipo de dato 'float'
    double numeroGrande = 3.14159265358979; // Tipo de dato 'double'
    bool esVerdadero = true;    // Tipo de dato 'bool'

    // Modificadores de tipo
    short int numeroCorto = 1000;  // 'short' es un modificador para 'int'
    long int numeroLargo = 1000000; // 'long' es un modificador para 'int'
    unsigned int numeroSinSigno = 250; // 'unsigned' elimina el signo para 'int'

    // Operadores
    int suma = numeroEntero + 5;    // Operador aritmético '+'
    int resta = numeroEntero - 2;    // Operador aritmético '-'
    int multiplicacion = numeroEntero * 3; // Operador aritmético '*'
    int division = numeroEntero / 2;   // Operador aritmético '/'
    int modulo = numeroEntero % 3;     // Operador aritmético '%'
    
    // Operadores relacionales
    bool esIgual = (numeroEntero == 10); // Compara si es igual
    bool esMayor = (numeroEntero > 5);    // Compara si es mayor
    
    // Operadores lógicos
    bool yLogico = (true && false); // Operador lógico AND
    bool oLogico = (true || false); // Operador lógico OR

    // Imprimir los resultados con las operaciones
    std::cout << "La letra asignada es: 'A' => " << letra << std::endl;
    std::cout << "El valor de 'numeroEntero' es: 10 => " << numeroEntero << std::endl;
    std::cout << "El valor de 'numeroDecimal' es: 3.14 => " << numeroDecimal << std::endl;
    std::cout << "El valor de 'numeroGrande' es: 3.14159265358979 => " << numeroGrande << std::endl;
    std::cout << "El valor de 'esVerdadero' es: true => " << esVerdadero << std::endl;
    std::cout << "El valor de 'numeroCorto' es: 1000 => " << numeroCorto << std::endl;
    std::cout << "El valor de 'numeroLargo' es: 1000000 => " << numeroLargo << std::endl;
    std::cout << "El valor de 'numeroSinSigno' es: 250 => " << numeroSinSigno << std::endl;
    
    std::cout << "El resultado de la operación '10 + 5' es: " << suma << std::endl;
    std::cout << "El resultado de la operación '10 - 2' es: " << resta << std::endl;
    std::cout << "El resultado de la operación '10 * 3' es: " << multiplicacion << std::endl;
    std::cout << "El resultado de la operación '10 / 2' es: " << division << std::endl;
    std::cout << "El resultado de la operación '10 % 3' es: " << modulo << std::endl;
    
    std::cout << "La comparación '10 == 10' resulta: " << esIgual << std::endl;
    std::cout << "La comparación '10 > 5' resulta: " << esMayor << std::endl;
    std::cout << "El resultado de la operación 'true && false' es: " << yLogico << std::endl;
    std::cout << "El resultado de la operación 'true || false' es: " << oLogico << std::endl;

    return 0;
}
