#include<stdio.h>
void main()
{
int i,j,k;
printf("enter the integers");
scanf("%d%d",&i,&j);
k=i+j;
printf("%d",k);
if(k%2==0)
{
printf("it is even");
}
else
{
printf("it is odd");
}
}
