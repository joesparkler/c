#include <stdio.h>

int main(void) {
	int a[50],i,j,n,h;
	printf("enetr the n value");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=1;j<=n;j++)
	{
		for(i=j+1;i<=n;i++)
		{
		if(a[j]>a[i])
		{
			h=a[j];
			a[j]=a[i];
			a[i]=h;
		}
		}
	}
	for(j=1;j<=n;j++)
	{
	printf(" %d",a[j]);
	}
	return 0;
}
