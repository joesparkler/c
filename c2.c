#include<stdio.h>
#include<conio.h>
int main()
{
int m,reverseInteger=0,remainder,originalInteger;
printf("enter a integer:");
scanf("%d",&m);
originalInteger=m;
while(m!=0)
{
reverseInteger=reverseInteger*10 + m%10;

m=m/10;
}
if(originalInteger==reverseInteger)
printf("%d is a palindrome",originalInteger);
else
printf("%d is not a palindrome",originalInteger);
return 0;
}

