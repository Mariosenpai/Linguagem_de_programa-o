"""
PEP8 - python Enchencement Proposal

são propostas de melhorias para a linguagem poncho

the zen of python

import this

A ideia da PEP8 é que possamos escrever codigo python de formas pythonica

[1] - utilize camel case para nomes de classes;


class Calculadora:
	pass


class CalculadoraCientifica:
	pass


[2] - utilize nomes em minúsculos , separados por underline para funções ou variáveis;

def soma():
	pass


def soma_dois():
	pass

numero = 2

numero_impar =3


[3] - utilize 4 espaços para identação;

if 'a' in 'banana':
	print("tem")


[4] - linhas em branco
- Separar funções e definições de classe com duas linhas em branco;
- Métodos dentro de uma classe devem ser separados com uma única linha em branco;


[5] - import

- imports devem ser sempre feitos em linhas separadas;

# Import Errado

import sys, os


# Import Certo

import sys
import os


# Não a problemas em utilizar:

from types import StringType, ListType

# Caso tenha muitos imports de um mesmo pacote, recomenda-se fazer:

from type import(
	StringType
	ListType
	SetType
	OutroType
)

# Imports devem ser colocados no topo do arquivo, logo depois de quaisquer comentários ou docstring e 
# antes de constantes ou variáveis globais.

[6] - Espaço em expressões e instruções 

# Não faça;

funcao( algo [1], { outro: 2 } )

# Faça:

funcao(algo[1], {outro:2})

[7] - termine sempre uma instrução como uma nova linha

"""
