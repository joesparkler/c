#include <stdio.h>
 
void main()
{
	int n,N=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>=1)
	{
		N=N+n;
		n--;
	}
	printf("Sum is %d",N);
}
