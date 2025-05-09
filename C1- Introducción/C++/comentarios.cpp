#include <iostream> // Biblioteca para entrada y salida

int main() {
    // Este es un comentario de una sola línea.
    // Se utiliza para explicar una línea específica de código o dejar notas breves.

    int numero = 10; // Declaración de una variable entera llamada 'numero' con valor inicial 10.

    /* Este es un comentario de múltiples líneas.
       Se puede usar para explicar secciones completas del código
       o para desactivar temporalmente un bloque de código. */

    // Imprimir el valor de la variable 'numero' en la consola
    std::cout << "El valor de la variable numero es: " << numero << std::endl;

    /*
       A continuación, se muestra un ejemplo de cómo desactivar
       temporalmente un bloque de código usando comentarios de múltiples líneas.
    */
    /*
    int desactivada = 20;
    std::cout << "Esta línea está desactivada y no se ejecutará." << std::endl;
    */

    // Retornar 0 para indicar que el programa terminó correctamente
    return 0;
}