#include <stdio.h>

int main(void) {
	int a[50],i,j,k,h;
	printf("enetr the n value");
	scanf("%d",&k);
	for(j=1;j<=k;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=1;j<=k;j++)
	{
		for(i=j+1;i<=k;i++)
		{
		if(a[j]>a[i])
		{
			h=a[j];
			a[j]=a[i];
			a[i]=h;
		}
		}
	}
	for(j=1;j<=k;j++)
	{
	printf(" %d",a[j]);
	}
	return 0;
}
