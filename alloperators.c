/* All arithmetic operations*/
#include<stdio.h>
void main()
{
	int a, b, c, d, e, f;
	
	a = 15;
	b = 5;
	
	c=a+b,d=b-c,e=c*d,a=d/e,f=a%b;
	
	printf("sum of %d and %d is %d:\n",a,b,c);
	printf("difference of %d and %d is %d:\n",b,c,d);
	printf("product of %d and %d is %d:\n",c,d,e);
	printf("quotient of %d and %d is %d:\n",d,e,a);
	printf("remiainder of %d and %d is %d:",a,b,f);
	
}
