#include <stdio.h>
void main()
{
	int a,m,c=0;
	printf("enter the num");
	scanf("%d",&a);
	while(a!=0)
	{
		m=a%10;
		c=c+m;
		a=a/10;
	}
	printf("\n sum of the num is :%d",c);
}
