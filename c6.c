#include <stdio.h>

int main(void) {
	{
    int a, b, min, max, flag=0;
    printf("\n Enter two numbers(Intervals) : ");
    scanf("%d%d",&min,&max);
     
    printf("\n The prime numbers between %d and %d are :",min,max);
     
    for(a=min+1;a<max;a++)
    {
        flag=0;
         
        for(b=2;b<=sqrt*(a);b++)      
        {
            if(a%b==0)
            {
                flag=1;
                break;
            }
        
        if (flag==0)
        {
            printf("%d",a);
        }
   
  	return 0;
}
