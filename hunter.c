#include<stdio.h>
void main()
{
int a,i,j;
scanf("%d",&a);
int a[20];
for(i=0;i<a;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<a;i++)
{
    for(j=i+1;j<a;j++)
{
if(a[i]==a[j])
printf("%d ",a[i]);}
} 
}
