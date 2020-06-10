"""
Recebendo dados do usuário

input() -> todo dado recebido via input e lido como string

"""


#escrita antiga

# Entrada de dados 
print("Qual é seu nome? ")
nome = input()

nome = nome.title()

print("Seja bem-vindo(a) %s " %idade)

print("Qual sua idade? ")
idade = input()

# Processamento 

# Saida de dados

print("O %s tem %s anos de idade." % (nome,idade))

#escrita antiga


#escrita moderna

# Entrada de dados 
print("Qual é seu nome? ")
nome = input()

nome = nome.title()

print("Seja bem-vindo(a) {} ".format(nome))

print("Qual sua idade? ")
idade = input()

# Processamento 

# Saida de dados

print("O {} tem {} anos de idade.".format(nome,idade))

;
