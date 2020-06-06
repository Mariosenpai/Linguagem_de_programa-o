#include <stdio.h>
#include <math.h>

/*
//questao 1
main(){	
	double x1, x2, y1, y2, dist;
	
	printf("Insira 4 valores no ponto x1, x2 e y1, y2:\n");
	scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
	
	dist = sqrt( ( (x2-x1) * (x2-x1) ) + ( ( y2-y1 ) * ( y2-y1 ) ) );
	
	printf("A distancia e:%.4lf",dist);
	
	return 0;
}
//questao 1


//questao 2
main(){	
	int num;
	
	printf("Digite um numero para saber se e par ou impar:\n");
	scanf("%d",&num);	
	
	if( num%2==0 ){
		printf("Par!!");
	}else{
		printf("Impar!!");
	}
	
	return 0;
}
//questao 2

//questao 3
main(){	
	int a,b,c;
	
	printf("Insira 3 numeros para saber qual e o maior:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if( (a>b && b>c) || (a>c && c>b) ){
		printf("O maior numero e %d", a);
	}else if ( (b>a && a>c) || ( b>c && c>a ) ){
		printf("O maior numero e %d", b);
	}else{
		printf("O maior numero e %d", c);
	}
	
	return 0;
}
//questao 3

//questao 5
main(){
	
	char vit;
	
	printf("Qual vitamina voce gostaria de receber informacao. A, B, C, D:\n");
	scanf("%c", &vit);
	
	switch(vit){		
			case 'a':
				printf("Vitamina A");
			break;
		
			case 'b':
				printf("Vitamina B");
			break;
		
			case 'c':
				printf("Vitamina C");
			break;
		
			case 'd':
				printf("Vitamina D");
			break;			
	}	
	return 0;
}
//questao 5


//questao 6
main(){
	
	int temp;
	
	printf("Qual a temperatura atual?\n");
	scanf("%d", &temp);
	
	if(temp<0){
		printf("Congelando");
	}else if ( temp>=11 && temp<=20 ){
		printf("entao, tempo muito frio");
	}else if ( temp>=21 && temp<=30 ){
		printf("entao, tempo frio");
	}else if ( temp>=31 && temp<=40 ){
		printf("entao, Normal");
	}else if ( temp>=41 && temp<=50 ){
		printf("entao, está quente");
	}else if ( temp>50 ){
		printf("entao, ta quente pra caralho");
	}		
	return 0;
}
//questao 6


//questao 7
main(){
	
	char car;
	
	printf("Digite para saber o que essa coisa que voce digitou e:");
	scanf("%c", &car);
	
	if(car>=48 && car<=57){
		printf("Numero");
	}else if ( car>= 97 && car<= 122 ){
		printf("Letra");
	}else {
		printf("Simbolo");
	}
	
	return 0;
}
//questao 7


//questao 10
main(){
	
	int valor,lvl,resultado;
	
	scanf("%d %d", &valor, &lvl);
	
	resultado = pow(valor,lvl);
	printf("%d", resultado);
	
	return 0;
}
//questao 10
*/







