#include <iostream>

// Sin usar "using namespace std"
int main() {
    /*
    Explicación del uso de "using namespace std":

    En C++, muchas funciones y objetos estándar, como `cout`, `cin`, y `endl`, 
    están definidos dentro del espacio de nombres `std` (abreviatura de "standard").
    Para acceder a estos elementos, podemos:
    
    1. Usar el prefijo `std::` antes de cada elemento (por ejemplo, `std::cout`).
    2. Declarar `using namespace std;` para evitar escribir `std::` repetidamente.

    Ventajas de usar "using namespace std":
    - Simplifica el código al no requerir el prefijo `std::` para cada elemento.

    Desventajas:
    - Puede causar conflictos si hay nombres duplicados en otros espacios de nombres.
    */

    // Sin "using namespace std", debemos usar el prefijo `std::`
    std::cout << "Hola, mundo (sin using namespace std)" << std::endl;

    // Usando "using namespace std"
    using namespace std;
    cout << "Hola, mundo (con using namespace std)" << endl;

    return 0;
}