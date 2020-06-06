
vetor5={}
for i=1,10000 do
	if i==5 then
		vetor5=vetor5+1
	end
	if i%10==5 then
		vetor5=vetor5+1
	end
	if math.floor(i/10)==5 then
		vetor5=vetor5+1
	end
	if math.floor(i/100)==5 then
		vetor5=vetor5+1
	end
	if math.floor(i/1000)==5 then
		vetor5=vetor5+1
	end
end


for i=2,#vetor5 do
	print(i)
end

--[[
cont=0
for i=1,1000000 do
	for j=2,#vetor5 do -- faz ele percorrer todo o vetor e printando os valores dele
		print(j)
		cont=cont+1
	end
	if math.floor(i/10000)==5 then
		cont=cont+1
		print(i)
	end
	if math.floor(i/100000)==5 then
		cont=cont+1
		print(i)
	end
end
print(cont)
--]]