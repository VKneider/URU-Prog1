
# Explicación de la función input() y conversión de tipos en Python

# La función input() en Python lee siempre la entrada como un string (cadena de texto).
# A continuación, se muestra cómo usar la función input() y cómo convertir los tipos de datos.

# Ejemplo 1: Leer una entrada como string
nombre = input("¿Cuál es tu nombre? ")
print("Hola, " + nombre + "!")  # El nombre ingresado será tratado como un string

# Ejemplo 2: Convertir entrada de string a entero (int)
numero = input("Introduce un número entero: ")
numero = int(numero)  # Convertimos el string ingresado a entero
print("El doble de tu número es:", numero * 2)

# Ejemplo 3: Convertir entrada de string a decimal (float)
decimal = input("Introduce un número decimal: ")
decimal = float(decimal)  # Convertimos el string ingresado a decimal
print("La mitad de tu número decimal es:", decimal / 2)


# Ejemplo 5: Uso de múltiples conversiones y cálculos con input()
numero1 = int(input("Introduce el primer número: "))
numero2 = float(input("Introduce el segundo número (decimal): el decimal se coloca con . "))
resultado = numero1 + numero2
print("La suma de tu número entero y decimal es:", resultado)
