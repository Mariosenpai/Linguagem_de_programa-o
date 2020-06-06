#include <stdio.h>


main(){
	
	int n1=1, n2=2, n3=3, n4=4, n5=5, esc1, esc2, esc3, a;
	
	printf("Escolhar os 3 numeros de 1 a 5:\n");
	scanf("%d",&esc1);
	scanf("%d",&esc2);
	scanf("%d",&esc3);
	
		

	if (esc1+esc2+esc3 == 6){
		printf("A porta %d e %d nao foram apertas", n4, n5);
	}	else if (esc1+esc2+esc3 == 7){
			printf("A porta %d e %d nao foram apertas", n3, n5);
		}	else if (esc1+esc2+esc3 == 8){
				printf("A porta %d e %d nao foram apertas", n3, n4);
			}	else if (esc1+esc2+esc3 == 9){
					printf("A porta %d e %d nao foram apertas", n1, n5);
				}	else if (esc1+esc2+esc3 == 11){
						printf("A porta %d e %d nao foram apertas", n1, n3);
					}	else if (esc1+esc2+esc3 == 12){
							printf("A porta %d e %d nao foram apertas", n1, n2);
						}			
	
	return 0;
	system("pause");
}
