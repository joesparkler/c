#include <stdio.h>

int main(void) {
	int n,j,count=0;
    scanf("%d",&n);
    for(j=1;j<=10;j++)
   { 
     if(n>=j && n<=10)
     {count++;}
    }
   if(count=1)
  printf("yes");
else
printf("no");
	return 0;
}
