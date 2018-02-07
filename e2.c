#include<stdio.h>
#include<string.h>
int main()
{
char a[15];
int i,count=0;
scanf("%[\n^]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='0')
count++;
}
printf("the strings in the given wors are:%d \n",count+1);
}
