math.randomseed(os.time())
function DesenhaFunct( v )
    io.write('v={'.. v[1])
    for i=2,#v do
        io.write(', '.. v[i])
    end
    print('}')
end


m = {}
for i=1,30 do
     m[i]={}
     for j=i,40 do
        m[i][j] = math.random(1,40)
    end
end

function oderna( v )
    aux=0 
    for i=1,#v-1 do
       
        for j=i+1,#v do
            if v[i]>v[j] then
                aux=v[j]
                v[j]=v[i]
                v[i]=aux
            end
        end
    end
    return v
end

v={87, 72, 81, 99, 32, 45, 13, 20, 17, 78, 71, 28, 4, 13, 77, 47, 6, 16, 94, 77, 13, 90, 25, 1, 38, 65, 29, 68, 25, 83, 6, 24, 23, 87, 16, 100, 83, 38, 67, 25, 83, 66, 46, 81, 23, 81, 27, 62, 8, 51, 18, 61, 58, 72, 8, 37, 62, 26, 49, 91, 18, 76, 40, 7, 64, 76, 60, 81, 62, 42, 11, 100, 24, 77, 10, 83, 45, 91, 98, 55, 41, 96, 6, 75, 46, 30, 46, 62, 69, 98, 62, 66, 68, 60, 15, 20, 42, 73, 33, 10}


    

print(DesenhaFunct(oderna(v)))


function todaCarta()
    carta={}
    carta.a=1
    carta.dois=2
    carta.tres=3
    carta.quatro=4
    carta.cinco=5
    carta.seis=6
    carta.sete=7
end



tdcartas={a=1,dois=2,tres=3,quatro=4,cinco=5,seis=6,sete=7,oito=8,nove=9,dez=10,J=11,Q=12,K=13}

print(#tdcartas)