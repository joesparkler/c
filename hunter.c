#include<stdio.h>
void main()
{
int n,i,k;
scanf("%d",&n);
int a[20];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(k=i+1;k<n;k++)
{
if(a[i]==a[k])
printf("%d ",a[i]);}
} 
}
