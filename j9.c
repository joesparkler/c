#include<stdio.h>
#include<string.h>
void main()
{
  char a[10],t;
  int l;
  printf("Enter the string");
  gets(a);
  l=strlen(a);
  for(int i=0;i<=l-1;i++)
  {
    for(int j=i+1;j<l;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  for(int i=0;i<=l;i++)
  {
    printf("%c",a[i]);
  }
}
