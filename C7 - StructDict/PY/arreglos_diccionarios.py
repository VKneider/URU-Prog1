# Función para crear una "estructura" de persona utilizando un diccionario
def crear_persona(nombre, edad, direccion):
    return {
        "nombre": nombre,
        "edad": edad,
        "direccion": direccion
    }

# Función para solicitar los datos de una persona
def solicitar_datos_persona():
    nombre = input("Nombre: ")
    edad = int(input("Edad: "))
    direccion = input("Dirección: ")
    print()
    return crear_persona(nombre, edad, direccion)

# Función para imprimir los datos de una persona
def imprimir_persona(persona, indice):
    print(f"Nombre: {persona['nombre']}")
    print(f"Edad: {persona['edad']}")
    print(f"Dirección: {persona['direccion']}")
    print("--------------------------")

# Constante para el número de personas
NUM_PERSONAS = 3

# Lista para almacenar los datos de las personas
personas = []

# Solicitar datos de las personas
for i in range(NUM_PERSONAS):
    persona = solicitar_datos_persona()
    personas.append(persona)

# Imprimir los datos de las personas
print("Datos de las personas ingresadas:")
for i, persona in enumerate(personas):
    imprimir_persona(persona)
