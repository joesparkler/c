#include<stdio.h>
int main(void)
{
	int i,j,k;
	printf("Enter the two numbers i and j");
  scanf("%d\t%d",&i,&j);
  c=i*j;
	if(c%2==0)
	{
		printf("The product of two number is even");
	}
	else
	{
		printf("The product of two number is odd");
	}
	return 0;
}
