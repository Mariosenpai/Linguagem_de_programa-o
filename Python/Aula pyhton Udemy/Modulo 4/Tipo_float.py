"""
Tipo float

tipo real decimal 

casa decimais

"""

# Errado isso acaba gerando um tupla
valor = 1,44
print(valor)
print(type(valor))

# Certo 
valor = 1.44
print(valor)
print(type(valor))

# É possivel
valor1, valor2 = 1, 44
print(valor1)
print(type(valor1))
print(valor2)
print(type(valor2))

print(" ")

# Muda o tipo numerico

num = 2.3
print(num)
num = int(num)
print(num)

print("")

num2 = 4
num2 = float(num2)
print(num2)




