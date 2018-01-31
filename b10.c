#include<stdio.h>
#include<conio.h>
void main()
{
    int count=0;
long long a;
printf("Enter the number : ");
scanf("%lld",&a);
while(a!=0)
{
count++;
a=a/10;
}
printf("The count of the number is %d",count);
getch();
}
