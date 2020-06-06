math.randomseed(os.time()) 
ale=math.random(1,60)

for i=1,6 do
	if i==1 then
	io.write(math.random(1,60))
	end
	io.write(", " .. math.random(1,60))
end
print(".")