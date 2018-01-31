#include<stdio.h>
void main()
{
char c;
printf("enter a character");
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z')){

	printf("alphabet");
	
}
else
{
	printf("Not a alphabet");
	
}
}
