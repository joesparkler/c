#include<stdio.h>
void main()
{
int a[10],i,m;
printf("n=");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("\n%d\t%d",a[i],i);
	}
	return 0;
}
