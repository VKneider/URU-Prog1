# Función esPar
# Esta función recibe un número entero como parámetro y determina si es par o impar.
# Un número es par si su residuo al dividirlo por 2 es 0. Si el residuo es distinto de 0, el número es impar.
def es_par(numero):
    return numero % 2 == 0  # Si el número dividido entre 2 tiene residuo 0, es par

# Función doble
# Esta función recibe un número entero y calcula su valor multiplicado por 2.
# Retorna el número duplicado.
def doble(numero):
    return numero * 2  # Retorna el número duplicado

# Función triple
# Esta función recibe un número entero y calcula su valor multiplicado por 3.
# Retorna el número triplicado.
def triple(numero):
    return numero * 3  # Retorna el número triplicado


# Pedir al usuario que ingrese un número
numero = int(input("Ingrese un número entero: "))  # Leer el número introducido por el usuario

# Verificar si el número es par utilizando la función esPar
if es_par(numero):
    print(f"El número {numero} es par.")
else:
    print(f"El número {numero} es impar.")
# Calcular el doble y el triple del número usando las funciones doble y triple
resultado_doble = doble(numero)  # Llamada a la función doble
resultado_triple = triple(numero)  # Llamada a la función triple

# Mostrar los resultados
print(f"El doble de {numero} es: {resultado_doble}")
print(f"El triple de {numero} es: {resultado_triple}")

