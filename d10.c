#include<stdio.h>
int main()
{
int hrs1,hrs2,mins1,mins2,m,n;
printf("Enter the hrs1 and mins1:");
scanf("%d%d",&hrs,&mins);
printf("Enter the hrs2 and mins2:");
scanf("%d%d",&hrs,&mins);
m=hrs1-hrs2;
n=mins1-mins2;
printf("%d %d",m,n);
return 0;
}
