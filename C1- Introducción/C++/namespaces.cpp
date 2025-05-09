// Ejemplo de namespaces en C++
// Los namespaces se utilizan para evitar conflictos entre nombres de variables o funciones.

#include <iostream>

namespace PrimerNamespace {
    int numero = 1;
}

namespace SegundoNamespace {
    int numero = 2;
}

int main() {
    
    int numero = 3;

    // Se accede a la variable numero del namespace PrimerNamespace
    std::cout << "Número del PrimerNamespace: " << PrimerNamespace::numero << std::endl;

    // Se accede a la variable numero del namespace SegundoNamespace
    std::cout << "Número del SegundoNamespace: " << SegundoNamespace::numero << std::endl;

    // Se accede a la variable numero del namespace standard (std)
    std::cout << "Número del main: " << numero << std::endl;

    // Explica el operador ::
    // El operador :: se utiliza para acceder a los miembros de un namespace o clase.
    // En este caso, se utiliza para acceder a la variable numero de los namespaces PrimerNamespace y SegundoNamespace.

    // Comentario Monolínea

    /*

        Comentario Multilínea
        Comentario Multilínea
        Comentario Multilínea

    */

    return 0;
}
