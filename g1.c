#include <stdio.h>

int main(void) {
        int a,rem,rev,dig;
        scanf("%d",&a);
        while(a!=0)
        { 
            rem=a%10;
            rev=rev*10+rem;
            n=n/10;
        }
     while(rev!=0)
    {
       dig=rev%10;
        rev=rev/10;
        printf("%d ",dig);
    }
         return 0;
}
