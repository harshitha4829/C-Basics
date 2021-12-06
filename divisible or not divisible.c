#include<stdio.h>
void main()
{
	int num;
	scanf("%d",&num);
	if(num%3==0&&num%7==0 && num%9==0)
	printf("given number is divisible with 3 & 7 & 9");
	else
	printf("given number is not divisible with 3 & 7 & 9");
	
}
