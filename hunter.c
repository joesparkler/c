#include<stdio.h>
void main()
{
int a,i,k;
scanf("%d",&a);
int a[20];
for(i=0;i<a;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<a;i++)
{
    for(k=i+1;k<a;k++)
{
if(a[i]==a[k])
printf("%d ",a[i]);}
} 
}
