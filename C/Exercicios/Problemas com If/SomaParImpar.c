#include <stdio.h>

main(){
	
	int n1, n2, n3, n4, n5,somaPar = 0,somaImpar = 0;
	
	printf("Digite 5 interiros:\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	scanf("%d",&n5);
	
	//soma ds pares
	if (n1%2==0){
		somaPar=n1+somaPar;
	}
	if (n2%2==0){
		somaPar=n2+somaPar;
	}
	if (n3%2==0){
		somaPar=n3+somaPar;
	}
	if (n4%2==0){
		somaPar=n4+somaPar;
	}
	if (n5%2==0){
		somaPar=n5+somaPar;
	}
	//soma ds pares
	
	//soma os impares
	if (n1%2==1){
		somaImpar=n1+somaImpar;
	}
	if (n2%2==1){
		somaImpar=n2+somaImpar;
	}
	if (n3%2==1){
		somaImpar=n3+somaImpar;
	}
	if (n4%2==1){
		somaImpar=n4+somaImpar;
	}
	if (n5%2==1){
		somaImpar=n5+somaImpar;
	}
		//soma os impares
		
	printf("A soma dos pares e: %d\n",somaPar);
	printf("A soma dos impares e: %d",somaImpar);	
		
	return 0;	
}
