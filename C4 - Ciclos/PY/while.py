# Contador y suma inicializados en cero
suma = 0
contador = 0

# Ciclo 'while' que continúa mientras se ingresen números positivos
while True:
    numero = float(input("Ingresa un número positivo (o un número negativo para salir): "))
    
    if numero < 0:
        break  # Sale del ciclo si el número es negativo
    
    suma += numero  # Suma el número a la suma total
    contador += 1  # Incrementa el contador de números positivos ingresados

# Imprime el resultado final
print(f"Has ingresado {contador} números positivos.")
print(f"La suma de esos números es: {suma}")
