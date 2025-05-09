# Matrices en Python: ejemplo práctico
# Una matriz es esencialmente una lista de listas.

# Crear una matriz de ejemplo
matriz = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

# Mostrar la matriz
print("Matriz original:")
for fila in matriz:
    print(fila)

# Acceder a un elemento específico (por ejemplo, el elemento en la fila 1, columna 2)
fila = 0  # Recuerda que los índices comienzan en 0
columna = 1
elemento = matriz[fila][columna]
print(f"\nEl elemento en la fila {fila + 1}, columna {columna + 1} es: {elemento}")

# Modificar un elemento de la matriz
matriz[1][1] = 10  # Cambiar el valor de la fila 2, columna 2 a 10
print("\nMatriz después de modificar el elemento en la fila 2, columna 2:")
for fila in matriz:
    print(fila)

# Calcular la suma de todos los elementos de la matriz
suma = 0
for fila in matriz:
    suma += sum(fila)  # Sumar todos los elementos de la fila
print(f"\nLa suma de todos los elementos de la matriz es: {suma}")

# Transponer la matriz (convertir filas en columnas y viceversa)
# Usaremos una comprensión de listas
matriz_transpuesta = [[matriz[j][i] for j in range(len(matriz))] for i in range(len(matriz[0]))]

print("\nMatriz transpuesta:")
for fila in matriz_transpuesta:
    print(fila)

# Multiplicar todos los elementos de la matriz por un número escalar - esto se hace con list comprehension, puede hacerse con for
escalar = 2
matriz_escalar = [[elemento * escalar for elemento in fila] for fila in matriz]

print(f"\nMatriz después de multiplicar por el escalar {escalar}:")
for fila in matriz_escalar:
    print(fila)

# Pedir al usuario que ingrese una nueva matriz
print("\nCreación de una nueva matriz por el usuario:")
filas = int(input("Ingrese el número de filas: "))
columnas = int(input("Ingrese el número de columnas: "))

# Crear una matriz vacía
nueva_matriz = []
for i in range(filas):
    fila = []
    for j in range(columnas):
        valor = int(input(f"Ingrese el elemento para la posición ({i + 1}, {j + 1}): "))
        fila.append(valor)
    nueva_matriz.append(fila)

print("\nMatriz ingresada por el usuario:")
for fila in nueva_matriz:
    print(fila)
