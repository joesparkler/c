#include<stdio.h>
int main()
{
    int i,c=0,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
{
    printf("it is prime");
    
}
else
{
    printf("it is composite");
}
return 0;
}
