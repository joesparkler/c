#include <stdio.h>
void main()
{
	int a[3],i,j,max;
	for(i=1;i<=4;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=4;i++)
	{
	 for(j=i+1;j<=4;j++)
	{
	if(a[i]>a[j])
	{
	max=a[i];
	printf("%d\n",i);
	}
	}
	}
}
