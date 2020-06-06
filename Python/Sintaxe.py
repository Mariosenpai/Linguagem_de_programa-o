# Python tem varias bibliotecas com isso vc pode importa-las usando o 
import nome_da_biblioteca

# comentario de uma linha

""" 
comentario de varias linhas

"""
#funçoes

range() #criar um vetor
len() #saber o tamanho de uma string

lower() #transforma tudo em minusculo
upper() #transforma tudo em maiusculo
strip() #revome caracteres especiais
split() #transforma um string em um vetor/lista
find()  #mostra a possiçao de determinada palavra na string
replace() # subistituir uma string por outra

#funçoes

# definir variavel
variavel = 20
# definir variavel

# printa na tela
print("Hello world")
# printa na tela

#interaçao com o usuario
num_int = int(input("Digite um numero inteiro:"))
num_float = float(input("Digite um numero real:"))
string = str(input("Digite uma letra/palavra"))
#interaçao com o usuario

# operadores matematicos
2+2
2-2
2/2
2*2
2**2 # isso seria a exponecioaçao
2%2
# operadores matematicos

# operadores relacionais

 == #igualdade
 != #diferente
 > #maior que
 < #menor que
 >= #maior ou igual que
 <= #menor ou igual que

# operadores relacionais 

#operadores logicos

 and #conjunçao
 or #disjunçao
 not #inverte o valor

#operadores logicos

#comando condicionais if
if condiçao:
	açao #o codigo do if e else vai ser execultado dentro da tabulaçao q seria os 4 espaços q o tab deixa

if condiçao:
	açao
else:
	açao

if condiçao:
	açao # <- dentro o if
print("algo") # <- fora do if

#comando condicionais if

if condiçao:
	açao
elif condiçao:
	açao
else:
	açao

#condicional composta if

#estruturas de repetiçao

x = 1
while x < 10: #se n ouver a identaçao o programa entra em loop infinito
	print(x)
	x = x + 1 <- #identaçao
	x += 1 <- #indetaçao reduzida

lista = [0,2,3,4,5]
	#ele iria atribuir o primeiros valor da lista (q seria um vetor)
	#e a identaçao é automatica
for x in lista:
	print(x)

for x in range(10): #criar uma lista de 10 valores de 0 a 9
	print(x)

for x in range(1,10,1): #criar uma lista de do primeiro valor ate o segundo menos 1 
	print(x)	 #podendo definir de quanto e quantos numero deve pular acrescentando um terceiro valor

#estruturas de repetiçao

#string

x = Mario

y = Freitas

print(x+y) -> #MarioFreitas
print(x + " " + y) -> #Mario Freitas 

print(len(x)) # pritaria o a quantidade de string

print(x[1]) # exibiria a string 'a' q coresponde a possiçao na string

print(x[0:2]) #exibira 'Mar' pegando uma parte da string e exibingo

print(x[0:]) #do começo ate o final printando tudo 'Mario'

	#obs: espaço tambem sao considerados strings
nome = x + " "+ y

print(nome.lower()) -> #mario freitas
print(nome.upper()) -> #MARIO FREITAS

nome = nome.upper() #para que toda a string fique maiuscula 
print(nome) -> #MARIO FREITAS
nome = x + " "+ y +"@"

print(nome) -> #Mario Freitas@
print(nome.strip()) -> #Mario Freitas

nome_completo = 'mario pinto freitas filho'
print(nome_completo.split()) -> #[mario, pinto, freitas, filho]
print(nome_completo.split("f")) -> #[mario pinto, reitas , ilho] cortando a letra escolida e começando por ela

busca = nome_completo.find("pinto")
print(busca) -> #pinto começa na posiçao 6
print(nome_completo[busca:]) -> #pinto freitas filho / partindo da posiçao 6 ate o final

nome_completo = nome_completo.repalce("pinto", "silva") #subistintuido a palavra pinto por silva
print(nome_completo) -> #mario silva freitas filho

#string

#funçao

	#funçoes sao definidas pela palavra reservadar def
	def
	
def nome_da_funcao(parametros):
	açao
pass

 #exemplo
def soma(a,b):
	print(a + b)
pass

soma(1,2) #tudo q esta acima ou na mesma linha do def faz parte da funçao 

def function(paramentro):
	ação
 print("algo") <- #dentro da funçao
print("algo2") <- #fora da funçao

 #usando o return
def soma(a,b):
	return a+b
	pass
print(soma(1,2)) #retorna apenas o valor nao um print entao tendo q printa para aparecer
s = soma(1,2)
print(s)

#funçao

#modolo manipulçao de arquivos

r -> #somente leitura
w -> #escrita(caso o arquivo ja exista, ele sera apagado e um novo arquivo vazio sera criado)
a -> #leitura e escrita(adiciona o noo conteudo ao fim do arquivo)
r+ ->#leitura e escrita
w+ ->#escrita(o modo w+, assim como o w, tbm apaga o arquivo anterior)
a+-> #leitura e escreita(abre o arquivo para atualizaçao)

#usar funçoes
read() #Le arquivos inteiros

readline() #le uma linha

readlines() #le arquivos e o armazena em uma lista
#usar funçoes



