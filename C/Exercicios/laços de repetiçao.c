#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){	
	
	int i=0;
	
//	while (i<=10){
//		printf("%d\n",i);
//		i=++i;
//	}
//	
	int cont = 0;
	char c;
	
	do{
		cont =++ cont;
		printf("digite 0 para Sair.\n");
		printf("%d\n",cont);
		c = getchar();
	}while(c != '0' );
	
	
	
	return 0;	
}
