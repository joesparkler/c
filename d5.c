#include<stdio.h>
int main()
{
int a[20];
int i,j,n,t;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}   
}
printf("sorted elemete are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
if((i%2)==0)
printf("median is %d",a[i/2 +1],a[i/2]);
else
printf("median is %d",a[(i/2)-1],a[(i/2)+1]);
}
    
