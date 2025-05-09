# Declaración e inicialización de variables en Python

# Tipos básicos de datos
letra = 'A'  # Tipo de dato string (str)
numeroEntero = 10  # Tipo de dato 'int'
numeroDecimal = 3.14  # Tipo de dato 'float'
numeroGrande = 3.14159265358979  # Tipo de dato 'float' (Python no tiene 'double')
esVerdadero = True  # Tipo de dato 'bool'

# Python no tiene modificadores como C++, pero los tipos son dinámicos

# Operadores
suma = numeroEntero + 5  # Operador aritmético '+'
resta = numeroEntero - 2  # Operador aritmético '-'
multiplicacion = numeroEntero * 3  # Operador aritmético '*'
division = numeroEntero / 2  # Operador aritmético '/'
modulo = numeroEntero % 3  # Operador aritmético '%'

# Operadores relacionales
esIgual = (numeroEntero == 10)  # Compara si es igual
esMayor = (numeroEntero > 5)  # Compara si es mayor

# Operadores lógicos
yLogico = (True and False)  # Operador lógico AND
oLogico = (True or False)  # Operador lógico OR

# Imprimir los resultados con las operaciones
print(f"El valor de 'letra' es: 'A' => {letra}")
print(f"El valor de 'numeroEntero' es: 10 => {numeroEntero}")
print(f"El valor de 'numeroDecimal' es: 3.14 => {numeroDecimal}")
print(f"El valor de 'numeroGrande' es: 3.14159265358979 => {numeroGrande}")
print(f"El valor de 'esVerdadero' es: True => {esVerdadero}")

print(f"El resultado de la operación '10 + 5' es: {suma}")
print(f"El resultado de la operación '10 - 2' es: {resta}")
print(f"El resultado de la operación '10 * 3' es: {multiplicacion}")
print(f"El resultado de la operación '10 / 2' es: {division}")
print(f"El resultado de la operación '10 % 3' es: {modulo}")

print(f"La comparación '10 == 10' resulta: {esIgual}")
print(f"La comparación '10 > 5' resulta: {esMayor}")
print(f"El resultado de la operación 'True and False' es: {yLogico}")
print(f"El resultado de la operación 'True or False' es: {oLogico}")
