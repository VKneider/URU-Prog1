# Contador de números pares
contador_pares = 0

# Ciclo 'for' que recorre los números del 1 al 100
for numero in range(0, 101):
    if numero % 2 == 0:  # Verifica si el número es par
        contador_pares += 1  # Incrementa el contador de números pares

# Imprime la cantidad de números pares
print(f"Hay {contador_pares} números pares entre 1 y 100.")
