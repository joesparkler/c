
#include<stdio.h>
int main()
{
int i,count=0;
char a[100];
gets(a);
for(i=0;a[i]!=0;i++)
{
if(a[i]>='0' && a[i]<='9')
{
count++;
}
else if(a[i]=='.')
{
	count++;
}
else
{ 
	printf("no special characters");
}
}
printf("no. of special characters  ar:%d",count);
return 0;
}
