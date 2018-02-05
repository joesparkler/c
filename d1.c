#include<stdio.h>
int main()
{
	int n,p=1,d,sum=0,i;
	printf("Enter n and d values");
	scanf("%d %d ",&n,&d);
	for(i=1;i<=n;i++)
	{
		sum=sum+p;
		p=p+d;
	}
	printf("\n%d",sum);
return 0;
}
