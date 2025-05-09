mi_diccionario = {"clave1": "valor1", "clave2": "valor2"}

# Un diccionario es una colección de elementos que se almacenan en pares clave-valor
# Para acceder a un valor de un diccionario, se puede hacer de dos formas:
# 1. Usando corchetes y la clave
print(mi_diccionario["clave1"])

# 2. Usando el método get
print(mi_diccionario.get("clave2"))

# Si se intenta acceder a una clave que no existe, usando corchetes se lanzará una excepción KeyError
# Usando el método get, se devolverá el valor None
print(mi_diccionario.get("clave3"))

# Se puede especificar un valor por defecto que se devolverá si la clave no existe
print(mi_diccionario.get("clave3", "No existe"))

# Para añadir un nuevo par clave-valor, se puede hacer de dos formas:
# 1. Usando corchetes y la clave
mi_diccionario["clave3"] = "valor3"

# 2. Usando el método update
mi_diccionario.update({"clave4": "valor4"})


# Para eliminar un par clave-valor, se puede hacer de dos formas:
# 1. Usando la palabra reservada del
del mi_diccionario["clave4"]
print(mi_diccionario)

# 2. Usando el método pop
mi_diccionario.pop("clave3")
print(mi_diccionario)

# Para obtener todas las claves de un diccionario, se puede usar el método keys
print(mi_diccionario.keys())

# Para obtener todos los valores de un diccionario, se puede usar el método values
print(mi_diccionario.values())

# Para obtener todos los pares clave-valor de un diccionario, se puede usar el método items
print(mi_diccionario.items())

# Para recorrer un diccionario, se puede hacer de dos formas:
# 1. Iterando sobre las claves
for clave in mi_diccionario:
    #print(clave, mi_diccionario[clave])
    pass

# 2. Iterando sobre los pares clave-valor
for clave, valor in mi_diccionario.items():
    print(clave, valor)

# Para crear un diccionario vacío, se puede hacer de dos formas:
# 1. Usando llaves
diccionario_vacio = {}

# 2. Usando la función dict
diccionario_vacio = dict()

# Para crear un diccionario con valores por defecto, se puede hacer de dos formas:
# 1. Usando un diccionario por comprensión
diccionario_con_valores_por_defecto = {clave: 0 for clave in range(10)}
