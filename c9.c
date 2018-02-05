#include<stdio.h>
void main()
{
    int a,b,d=1;
    printf("\n Enter the table value");
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    d=d*a;
    printf("FACTORIAL VALUE:%d",d);
}
