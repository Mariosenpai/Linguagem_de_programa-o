#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int a,b,c;
	double  r,s,d;
	
	printf("Leia 3 valores:\n");
	scanf("%d %d %d", &a,&b,&c);

	printf("valor a:%d\n",a);
	printf("valor b:%d\n",b);
	printf("valor c:%d\n",c);

	r = pow((a+b),2);
	s = pow((b+c),2);
	
	d = (r+s)/2;
	
	printf("%.2lf",d);
	
		
	return 0;
}
