watts = int(input("quantos watts:"))
largura,comprimento = int(input("qual largura?:")), int(input("qual comprimento?:"))

md = largura*comprimento

wporm = 18*md

lampadas = wporm/watts

print("um comodo de {} metros quadrados vai precisar de {} lampadas com {} watts de potencia".format(md,lampadas,watts))