#include <stdio.h>
void main() 
{
         int j,count=0;
         char a[50];
         printf("\nEnter string");
         gets(a);
         for(j=0;a[j]!=0;j++)
         {
         	if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='z'))
         	count++;
         
         	
         }
         printf("%d",count);
}
