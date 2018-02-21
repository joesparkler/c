#include<stdio.h>
int main(void)
{
	int i,b,largest,a[3],smallest;
	scanf("%d",&b);
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	largest=a[0];
	for(i=0;i<b;i++)
	if(a[i]>largest)
	largest=a[i];
	printf("%d is the largest\n",largest);
	smallest=a[0];
	for(i=0;i<b;i++)
	if(a[i]<smallest)
  smallest=a[i];
	printf("%d is the smallest",smallest);
	return 0;
}
