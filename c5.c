#include<stdio.h>

void main()
{ 
    int m,i,r;
    scanf("%d",&m);
    scanf("%d",&r);
    for(i=m+1;i<r;i++)
    {
        if(i%2==0)
        {
           printf("%d ",i);
        }
    }
   
}
