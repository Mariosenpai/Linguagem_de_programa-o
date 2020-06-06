#include <stdio.h>
#include <stdlib.h>

//variaveis globais

	//pericias
	int adestrar_animais,intuicao,medicina,percepcao,sobrevivencia,atuacao;
	int enganacao,intimidacao,persuasao,arcanismo,historia,investigacao,natureza;
	int religiao,acrobracias,furtividade,prestidigitacao,atletismo;
	//pericias

	int classe,raca,vida,str,dex,cont,inter,sab,car;
	int mod_str,mod_dex,mod_cont,mod_int,mod_sab,mod_car;
	int antecedente;
	int per1,per2;
	
//variaveis globais	

int atributo(int atrib){
	
	if (atrib ==1){
		return (-5);
	}else if (atrib == 2 || atrib ==3){
		return (-4);
	}else if (atrib == 4 || atrib ==5){
		return (-3);
	}else if (atrib == 6 || atrib ==7){
		return (-2);
	}else if (atrib == 8 || atrib ==9){
		return (-1);
	}else if (atrib == 10 || atrib ==11){
		return (-0);
	}else if (atrib == 12 || atrib ==13){
		return (1);
	}else if (atrib == 14 || atrib ==15){
		return (2);
	}else if (atrib == 16 || atrib ==17){
		return (3);
	}else if (atrib == 18 || atrib ==19){
		return (4);
	}else if (atrib >= 20){
		return (5);
	}
	
}


int main(void){
		
	
printf("\t\t\tD&D Edicao 5.0\n");

printf("Escolha sua raca HUMANO(1) ELFO(2) HIGH ELFO(3) ELFO DA FLORESTA(4) ANAO(5) HALFING(6)\n");
printf("Escolha:");
scanf("%d",&raca);

printf("Escolha uma classe GUERREIRO(1) MAGO(2) LADINO (3) DRUIDA(4) PALADINO(5)\nBRUXO(6) CLERICO(7)\n");
printf("Escolha:");
scanf("%d",&classe);


if (raca == 1){
printf("Humanos recebem mais 1 em todos os atributos.\n");	
printf("Defina os atributos STR,DEX,CONT,INT,SAB,CAR nessa ordem.\n");

	escolha_atributos();
	
	str++;			
	dex++;
	cont++;
	inter++;
	sab++;
	car++;
	
	mod_str = atributo(str);
	mod_dex = atributo(dex);
	mod_cont = atributo(cont);
	mod_int = atributo(inter);			
	mod_sab = atributo(sab);
	mod_car = atributo(car);
	
	percias(mod_str,mod_dex,mod_cont,mod_int,mod_sab,mod_car);
				
	if (classe == 1){
					
		proficiencias_guerreiro();
		antecedentes();
		
	}
	else if(classe==2){
		

		
	}
		
}	

			
	return 0;
}


int escolha_atributos(){
	
	printf("FORCA:");
	scanf("%d",&str);
	printf("DESTREXA:");
	scanf("%d",&dex);
	printf("CONSTITUICAO:");
	scanf("%d",&cont);
	printf("INTERLIGENCIA:");
	scanf("%d",&inter);
	printf("SABEDORIA:");
	scanf("%d",&sab);
	printf("CARISMA:");
	scanf("%d",&car);	
	
}

int antecedentes(){
	
		printf("\t\tAntecedente\n\n");
		printf("Escolha seu antecedente:\n");
		printf("Acolito(1), Artersao De Guida(2), Artista(3), Charlatao(4),\nCriminoso(5), Eremita(6), Forasteiro(7), Heroi Do Povo(8),\nMarinheiro(9), Nobre(10), Orfao(11), Sabio(12), Soldadado(13)\n");
		printf("Antecedente:");
		scanf("%d",&antecedente);
		antece(antecedente);
	
}


int proficiencias_guerreiro(){
		
		printf("1d10 e o dado de vida do Guerreiro.\nInsira a vida dele:");
		scanf("%d",&vida);
		printf("\t\tProficiencias\n\n");
		printf("Guerreiros tem proficiencia em:\n");
		printf("ARMADURA:Todas as armaduras e escudos.\n");
		printf("ARMAS:todas as armas simples e marcais.\n");
		printf("Teste De Resistencia:");
		printf("FORCA, CONSTRIRUICAO\n");
		printf("\t\tPericias\n\n");
		printf("O Guerreiro pode escolhe 2 pericia entre:\n");
		printf("Acrobacia(1), Adestrar animais(2), Atletismo(3), Historia(4),\nIntuicao(5), Intimidacao(6), Percepcao(7) e Sobrevivencia(8)\n");
		printf("Pericia 1:");
		scanf("%d",&per1);
		printf("Pericia 2:");
		scanf("%d",&per2);			
		pericias_guerreiro(per1);
		pericias_guerreiro(per2);
		
}	


	
int percias(mod_strP,mod_dexP,mod_contP,mod_intP,mod_sabP,mod_carP){
		
	atletismo = mod_strP;
	
	acrobracias =mod_dexP;
	furtividade =mod_dexP;
	prestidigitacao =mod_dexP;
	
	arcanismo = mod_intP;
	historia = mod_intP;
	investigacao = mod_intP;
	natureza = mod_intP;
	religiao = mod_intP;
	
	adestrar_animais = mod_sabP;
	intuicao = mod_sabP;
	medicina =  mod_sabP;
	percepcao = mod_sabP;
	sobrevivencia = mod_sabP;
	
	atuacao = mod_carP;
	enganacao = mod_carP;
	intimidacao = mod_carP;
	persuasao = mod_carP;
	
}

int antece(ant){
	
	if (ant==1){
		intuicao+=2;
		religiao+=2;
	}else if (ant==2){
		intuicao+=2;
		persuasao+=2;
	}else if (ant==3){
		acrobracias+=2;
		atuacao+=2;
	}else if (ant==4){
		enganacao+=2;
		prestidigitacao+=2;
	}else if (ant==5){
		enganacao+=2;
		furtividade+=2;
	}else if (ant==6){
		medicina+=2;
		religiao+=2;
	}else if (ant==7){
		atletismo+=2;
		sobrevivencia+=2;
	}else if (ant==8){
		adestrar_animais+=2;
		sobrevivencia+=2;
	}else if (ant==9){
		atletismo+=2;
		percepcao+=2;
	}else if (ant==10){
		historia+=2;
		persuasao+=2;
	}else if (ant==11){
		furtividade+=2;
		prestidigitacao+=2;
	}else if (ant==12){
		arcanismo+=2;
		historia+=2;
	}else if (ant==13){
		atletismo+=2;
		intimidacao+=2;
	}
	

}

int pericias_guerreiro(int per){
	
	if(per==1){
		return (acrobracias += 2);
	}else if(per==2){
		return (adestrar_animais += 2);
	}else if(per==3){
		return (atletismo += 2);
	}else if(per==4){
		return (historia += 2);
	}else if(per==5){
		return (intuicao += 2);
	}else if(per==6){
		return (intimidacao += 2);
	}else if(per==7){
		return (percepcao += 2);
	}else if(per==8){
		return (sobrevivencia += 2);
	}
	
}
