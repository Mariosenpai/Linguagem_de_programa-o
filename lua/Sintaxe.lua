
--Comentar codigo

--[[
Comentar multiplas linhas
]]--

--definir variavel 

variavel = 20

--definir variavel

--print

print("Hello world!!")

--print

--interraçao com o usuario

print("Digite algo:")
num = io.read("*n") -- quando a resposta esperada for numero
text = io.read() -- quando foi str

--interraçao com o usuario

--operadores relacionais
 == -- igualdade
 ~= -- diferente 
 > --maior que
 < --menor que
 >= --maior ou igual que
 <= --menor ou igual que

--operadores relacionais

--operadores logicos

 and -- conjunçao
 or --disjunçao
 not -- inverte o valor
 
--operadores logicos

--como usar o if

if condiçao then --  se a condiçao for verdadeira
	açao
end

if not condiçao then -- se a condiçao for falsa
	açao
end

--como usar o if

--if composto

if condiçao then
	açao
	elseif condiçao then
		açao
	else
		açao
end

--if composto

--criar uma funçao

function function_name( variavel da funçao )
	-- corpo da funçao
	return --alguma coisa para aparece quando eu chama esse funcao novamente 
end

--criar uma funçao

--laços de repetiçao

for i=1,10, 1 do --esta implicitamente acrescentendo 1 toda vez q roda pode muda isso
	print(i)
end

while i=1,10 do
	print(i)
	i=i+1
end

--laços de repetiçao

--criar vetores

vetor = {'definir os itens do vetor', 1, 2 ,3}

--criar vetores

-- acessa uma possiçao no vetor

vetor = {1,2,6,7}
print(vetor[4])--o print seria 6

-- acessa uma possiçao no vetor

--criar uma matriz

vetor = {}
for i=1,5 do
	vetor[i]={} --criando as linha de um vetor
	for j=1,5 do -- coluna
		vetor[i][j] = 0 --bota o deseja
	end
end

--criar uma matriz