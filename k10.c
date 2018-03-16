#include<stdio.h>
void main() 
{
   int n,pro=1,mod;
   scanf("%d",&n);
   while(n!=0)
   {
       mod=n%10;
       pro=pro*mod;
       n=n/10;
   }
   printf("%d",pro);
}
