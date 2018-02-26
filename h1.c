#include <stdio.h>
int main(void) 
{
	char a[10];
	scanf("%s",a);
	int n,j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("%c",a[j]);
	}
	return 0;
}
