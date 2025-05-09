my_dict = {
    "nombre": "Juan",
    "apellido": "Pérez",
    "edad": 28
}

# Mejor for para recorrer un diccionario
for clave, valor in my_dict.items():
    print(f"Clave: {clave}, Valor: {valor}")

# Mejor for para recorrer un diccionario con índices
for indice,(clave,valor) in enumerate(my_dict.items()):
    print(f"Indice: {indice}, Clave: {clave}, Valor: {valor}")


my_list = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j"]
print(my_list)

# Mejor for para recorrer una lista
for item in my_list:
    # print(item)
    pass

# Mejor for para recorrer una lista con índices
for indice, item in enumerate(my_list):
    # print(indice, item)
    pass

# Mejor for para ejecutar un bloque de código un número determinado de veces
numero_de_veces = 10
for contador in range(numero_de_veces):
    pass