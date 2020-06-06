math.randomseed( os.time() )
print('Qual o tamaho do vetor: ')
tamaho=io.read("*n")
print("De quanto ate quanto ele deve variar: ")
vari1=io.read("*n")
vari2=io.read("*n")
v={}

for i=1,tamaho do
	v[i] = math.random(vari1,vari2)
end 

io.write('v={' .. v[1])

for i=2,tamaho do
	io.write(', '.. v[i])
end
print('}')