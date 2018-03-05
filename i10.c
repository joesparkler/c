#nclude<stdio.h>
void main()
{
int n,n1;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
if(n1%2!=0)
{
printf("%d\t\t",n1);
}
n=n/10;
}
}
