import pygame
from random import randint, randrange
try:
	pygame.init()
except:
	print("o modulo do pygame nao foi inicializado com sucesso")

pygame.display.set_caption("Cobra")

#variaveis globais

##cores
branco = (255,255,255)
preto= (0,0,0)
red = (255,0,0)
blue = (0,0,255)
##cores

largura = 640
altura = 480

fundo = pygame.display.set_mode((largura,altura))

relogio = pygame.time.Clock()
tamanho = 10

#variaveis globais


def cobra(COBRAXY):
	for XY in COBRAXY:
		pygame.draw.rect(fundo, red, [XY[0],XY[1],tamanho,tamanho])

def maca(maca_x,maca_y):
	pygame.draw.rect(fundo, preto, [maca_x,maca_y,tamanho,tamanho])

def jogo():
	
	sair = True 
	##cobra
	pos_x = randrange(0,(largura-tamanho),10)
	pos_y = randrange(0,(altura-tamanho),10)
	velocidade_x = 0
	velocidade_y = 0
	COBRAXY = []
	cobra_comp = 1
	frame = 5
	##cobra
	##maça
	maca_x = randrange(0,(largura-tamanho),10)
	maca_y = randrange(0,(altura-tamanho),10)
	##maça

	while sair: #enquanto sair for true o jogo vai roda
		for event in pygame.event.get(): # lê os eventos que estao acontecendo na tela

			if event.type == pygame.QUIT: # se o evento for igual a clica em aperta no x pra sair entao saia do jogo
				sair = False

			if event.type == pygame.KEYDOWN:
				if event.key == pygame.K_LEFT and velocidade_x != tamanho:
						velocidade_y = 0
						velocidade_x = -tamanho
				if event.key == pygame.K_RIGHT and velocidade_x != -tamanho:
						velocidade_y = 0
						velocidade_x = tamanho
				if event.key == pygame.K_UP and velocidade_y != tamanho:
						velocidade_y = -tamanho
						velocidade_x = 0
				if event.key == pygame.K_DOWN and velocidade_y != -tamanho:
						velocidade_y = tamanho
						velocidade_x = 0
		#faz com que ele permaneça dentro da tela
		if pos_x >= largura:
			pos_x = 0 + tamanho # "0+tamanho" para que apareça dentro da tela
		if pos_x <= 0:
			pos_x = largura-tamanho
		if pos_y >= altura:
			pos_y = 0 + tamanho
		if pos_y <= 0:
			pos_y = altura-tamanho

		fundo.fill(branco) #defini a cor do fundo do programa
		
		pos_x+=velocidade_x
		pos_y+=velocidade_y

		
		cobra_cabeça = []
		cobra_cabeça.append(pos_x)
		cobra_cabeça.append(pos_y)
		COBRAXY.append(cobra_cabeça)

		if len(COBRAXY) > cobra_comp:
			del COBRAXY[0]

		cobra(COBRAXY) #onde a cobra vai aparecer
		if pos_x == maca_x and pos_y == maca_y: #quando a cobra passa por cima da maça ela muda de posiçao
			maca_x = randrange(0,(largura-tamanho),10)
			maca_y = randrange(0,(altura-tamanho),10)
			cobra_comp += 1
			frame+=1


		maca(maca_x,maca_y)#onde a maça vai aparecer

		pygame.display.update()
		relogio.tick(frame) #defini a quantidade de frame que o jogo tem

jogo()

pygame.quit()
