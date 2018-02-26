#include<stdio.h>
void main()
{
int i,j,temp; 
printf("Enter the value of i and j: \n");
scanf("%d%d",&i,&j);
printf("Before Swapping : ",i,j);
{ 
   temp=i;
   i=j;
   j=temp;
}
printf("After Swapping :",i,j);
return 0;
}
