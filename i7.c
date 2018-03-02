#include<stdio.h>
int main()
{
  int i,j,ft,n;
  printf("\n Enter a number:");
  scanf("%d",&n);
  printf("All Prime Factors of %d are: \n", n);
  for(i=2;i<=n;i++)
  if(n%i==0)
  {
     ft=1;
   }
   for(j=2;j<i/2;j++)
   if(i%j==0)
    {
        ft=0;
    }
    if(ft==1)
    {
        printf("%d",i);
    }
    return 0;
}
