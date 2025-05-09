# Declaración de variable
edad = 20

# Condicional simple para la edad
if edad >= 18:
    print("Eres mayor de edad.")
else:
    print("Eres menor de edad.")

# Ingreso de licencia de conducir
tiene_licencia = input("¿Tienes licencia de conducir? (S/N): ")

# Convertir el valor de 'tiene_licencia' a booleano
tiene_licencia = (tiene_licencia.lower() == 's')

# Condicionales con AND (and) y OR (or)
if edad >= 18 and tiene_licencia:
    print("Eres mayor de edad y tienes licencia de conducir.")
elif edad < 18 and tiene_licencia:
    print("Eres menor de edad, pero tienes licencia de conducir.")
elif edad >= 18 or tiene_licencia:
    print("Eres mayor de edad o tienes licencia de conducir.")
else:
    print("No eres mayor de edad ni tienes licencia de conducir.")


if edad >=18:
    print("Eres mayor de edad.")
    if tiene_licencia:
        print("Tienes licencia de conducir.")
    else:
        print("No tienes licencia de conducir.")
else:
    print("Eres menor de edad.")