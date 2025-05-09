# Declaración de una lista simple
my_list = [1, 2, 3, 4, 5]

# Mostrar el tipo de dato de una lista
print(f"Tipo de dato de 'my_list': {type(my_list)}")  # <class 'list'>

# Listas anidadas (listas dentro de listas)
list4 = [[1, 2], [3, 4]]

# Recorrer y mostrar los elementos de una lista anidada
print("Elementos de la lista anidada:")
for i in range(len(list4)):  # Recorrer las filas
    for j in range(len(list4[i])):  # Recorrer las columnas
        print(list4[i][j], end=" ")
    print("")  # Salto de línea después de cada fila

# Operación de multiplicar listas
print("\nMultiplicación de listas:")
print([1, 2, 3] * 3)  # Repite la lista 3 veces: [1, 2, 3, 1, 2, 3, 1, 2, 3]

# Cortes de listas (list slicing)
# Sintaxis: lista[start:stop:step]
lista_prueba = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("\nEjemplos de cortes de listas (slicing):")
lista_1_5 = lista_prueba[0:5]  # Elementos desde el índice 0 hasta el 4
lista_pares = lista_prueba[1::2]  # Elementos en posiciones pares
lista_impares = lista_prueba[::2]  # Elementos en posiciones impares

print(f"Lista original: {lista_prueba}")
print(f"Elementos del 1 al 5: {lista_1_5}")
print(f"Elementos en posiciones pares: {lista_pares}")
print(f"Elementos en posiciones impares: {lista_impares}")

# Métodos comunes en listas
print("\nEjemplo de métodos en listas:")
# pop(): Elimina y retorna el último elemento o el elemento en una posición específica
ultimo = lista_prueba.pop()  # Eliminar el último elemento
print(f"Último elemento eliminado: {ultimo}")
print(f"Lista después de eliminar el último elemento: {lista_prueba}")

posicion_dos = lista_prueba.pop(2)  # Eliminar el elemento en la posición 2
print(f"Elemento eliminado en la posición 2: {posicion_dos}")
print(f"Lista después de eliminar el elemento en la posición 2: {lista_prueba}")

# sort(): Ordena la lista en orden ascendente (modifica la lista original)
lista_prueba.sort()
print(f"Lista ordenada de menor a mayor: {lista_prueba}")

# sort(reverse=True): Ordena la lista en orden descendente
lista_prueba.sort(reverse=True)
print(f"Lista ordenada de mayor a menor: {lista_prueba}")

# reverse(): Invierte el orden de los elementos
lista_prueba.reverse()
print(f"Lista invertida: {lista_prueba}")

# insert(): Inserta un elemento en una posición específica
lista_prueba.insert(2, 3)  # Insertar el número 3 en la posición 2
print(f"Lista después de insertar el número 3 en la posición 2: {lista_prueba}")

# count(): Cuenta cuántas veces aparece un elemento en la lista
conteo_tres = lista_prueba.count(3)
print(f"El número 3 aparece {conteo_tres} veces en la lista.")

# index(): Retorna el índice de la primera aparición de un elemento
indice_tres = lista_prueba.index(3)
print(f"El primer índice donde aparece el número 3 es: {indice_tres}")

# Crear listas con range()
my_list = list(range(1, 11))
print(f"\nLista creada con range(): {my_list}")

# extend(): Agrega los elementos de otra lista al final de la lista actual
my_list.extend([11, 12, 13])
print(f"Lista después de usar extend(): {my_list}")

# sorted(): Ordena una lista sin modificar la lista original
new_sorted_list = sorted(my_list)
print(f"Lista ordenada usando sorted(): {new_sorted_list}")

# Copiar listas
# Diferentes formas de copiar una lista
lista_a = [1, 2, 3, 4, 5]

# Copia usando copy()
lista_b = lista_a.copy()
lista_b[0] = 10
print(f"\nLista original: {lista_a}, Lista copiada y modificada: {lista_b}")

# Copia usando list()
lista_c = list(lista_a)
lista_c[0] = 20
print(f"Lista original: {lista_a}, Lista copiada y modificada: {lista_c}")

# Copia usando slicing
lista_d = lista_a[:]
lista_d[0] = 30
print(f"Lista original: {lista_a}, Lista copiada y modificada: {lista_d}")

# remove(): Elimina el primer elemento con el valor especificado
lista_a.remove(3)
print(f"Lista después de eliminar el valor 3: {lista_a}")

