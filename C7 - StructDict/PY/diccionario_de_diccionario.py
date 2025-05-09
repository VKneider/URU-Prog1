# Función para crear una persona
def crear_persona(nombre, edad, direccion):
    return {
        "nombre": nombre,
        "edad": edad,
        "direccion": direccion
    }

# Función para crear una relación de comida por persona para una fiesta
def crear_comida_por_persona_para_fiesta(persona, comida, total_gastado):
    return {
        "persona": persona,
        "comida": comida,
        "total_gastado": total_gastado
    }

# Constante para el número de personas
NUM_PERSONAS = 3

# Lista para almacenar los datos de la fiesta
fiesta = []
total_gastado_por_todos = 0.0

# Solicitar datos de las personas y la comida
for i in range(NUM_PERSONAS):
    print(f"Ingrese los datos de la persona {i + 1}:")
    nombre = input("Nombre: ")
    edad = int(input("Edad: "))
    direccion = input("Dirección: ")
    comida = input("Ingrese la comida que traerá: ")
    total_gastado = float(input("Ingrese el total gastado: "))
    print()

    # Crear una persona y luego crear su entrada de comida para la fiesta
    persona = crear_persona(nombre, edad, direccion)
    comida_por_persona = crear_comida_por_persona_para_fiesta(persona, comida, total_gastado)
    fiesta.append(comida_por_persona)
    total_gastado_por_todos += total_gastado

# Imprimir los datos de la fiesta
print("Datos de la fiesta:")
for i, entrada in enumerate(fiesta):
    print(f"Persona {i + 1}:")
    print(f"Nombre: {entrada['persona']['nombre']}")
    print(f"Edad: {entrada['persona']['edad']}")
    print(f"Dirección: {entrada['persona']['direccion']}")
    print(f"Comida: {entrada['comida']}")
    print(f"Gasto: {entrada['total_gastado']:.2f}")
    print("--------------------------")

# Mostrar el total gastado por todos
print(f"Total gastado por todos: {total_gastado_por_todos:.2f}")
