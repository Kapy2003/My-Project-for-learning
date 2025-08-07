#include <stdio.h>
int main ( void )
{
	float a , b , c , d , e ;
	printf("The value of a: ");
	scanf("%f",&a);
	
	printf("The value of b: ");
	scanf("%f",&b);
	
	c = a;
	a = b;
	b = c;
	printf("the swapped value of a with temp variable : %g\n",a);
	printf("the swapped value of b with temp variable : %g\n",b);
	
	printf("The value of a for without temp variable : ");
	scanf("%f",&d);
	
	printf("The value of b for without temp variable : ");
	scanf("%f",&e);
	
	d = d+e;
	e = d-e;
	d = d-e;
	
	printf("the swapped value of a without temp variable : %g\n",d);
	printf("the swapped value of b without temp variable : %g\n",e);
	
	
	return 0;
}
