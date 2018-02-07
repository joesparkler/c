#include<stdio.h>
int main()
{
	int i,j,temp;
	printf("enter i and j\n");
	scanf("%d\n%d",&i,&j);
	temp=i;
	i=j;
	j=temp;
	printf("%d\n%d",i,j);
	return 0;
}
