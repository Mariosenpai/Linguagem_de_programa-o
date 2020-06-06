#include <stdio.h>



main(){
	
	int joao, maria, i = 0, j = 0 ;
	
	printf("Informe as cartas de cada jogador:\n");
	printf("Joao:");
	scanf("%d",&joao);
	printf("Maria:");
	scanf("%d",&maria);
	
	i = joao == maria-1; // isso dara um  valor logico 1 se for verdade e 0 se for falso
	j = maria%joao == 0; // maria sera dividar no caso o primeiro numero pelo q estive depois do "%"
	
	if( i==1 || j==1 ){
		printf("joao venceu!!");
	}else{
		printf("Maria venceu!!");
	}	
	
	return 0;
}


/*
main(){
	
	int prova1, prova2, prova3, prova4;
	double media;
	
	printf("Insira as 4 notas do aluno:\n");
	printf("Nota 1:");
	scanf("%d",&prova1);
	printf("Nota 2:");
	scanf("%d",&prova2);
	printf("Nota 3:");
	scanf("%d",&prova3);
	printf("Nota 4:");
	scanf("%d",&prova4);
	
	media = (prova1+prova2+prova3+prova4)/4;
	
	if (media<3){
		printf("Reprovado");
		
		}else if (media>=3 && media<7){
			printf("Recuperacao final");
			
		}else if(media>=7){
			printf("Aprovado!!");
	} 
	
	return 0;
}

*/

