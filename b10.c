#include<stdio.h>
#include<conio.h>
void main()
{
    int count=0;
long long j;
printf("Enter the number : ");
scanf("%lld",&j);
while(j!=0)
{
count++;
j=j/10;
}
printf("The count of the number is %d",count);
getch();
}
