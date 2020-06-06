import random
import time

print("-=-"*25)
print("O programa iria pensar um numero de 0 a 5 escolha o numero que ele pensara")
print("-=-"*25)
num = int(input("Digite um numero:"))
numero_aleatorio = random.randint(0,5)
print("PROCESSANDO...")
time.sleep(2)
if num==numero_aleatorio:
    print("Voce venceu!!! O numero pensado foi {}".format(num))
else:
    print("Voce perdeu o numero pensado foi {} e vc escolheu o {}".format(numero_aleatorio,num))