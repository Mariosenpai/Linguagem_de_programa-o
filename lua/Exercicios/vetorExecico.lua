--[[math.randomseed(os.time())

v={}
for i=1,10 do
	v[i]= math.random(1,10)
end
io.write('v = {' ..v[1])
for i=2,10 do
	io.write(', ' .. v[i])
end
print('}')
--]]
orderna = {3, 5, 8, 9, 6, 3, 2, 4, 3, 5}

varaux = 0
cont1 = 1
cont2 = 1
v ={3, 1, 2}
vet = {} 

for i=1,3 do
	io.write("Digite um numero")
	nun = io.read('*n')
	vet[i]= nun
end

for i=1,#vet-1 do -- nao vai ate o final pq n tem como comparalo com ngm
	for j=i+1,#vet do -- o loop dentro serve para compara o i  q no caso é 1 percorra todo o vetor com o loop interno testando tudo dentro dele
		if vet[i]>vet[j] then
			varaux = vet[j]
			vet[j] = vet[i]
			vet[i] = varaux
		end
	end
end

for i=1,#vet do
	print(vet[i])
end

