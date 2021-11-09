#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character(A-Z or a-z)");
	scanf("%c", &ch);
	printf("corresponding ASCIInumber for %C is %d",ch,ch);
}
