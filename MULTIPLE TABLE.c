#include<stdio.h>
int main()
{
  int a,n,i;
  a=15;
  printf("enter the end value");
  scanf("%d",&n);
  for (i=1;i<=a;i++)
  {
        n=a*i;
        printf("%d*%d=%d\n",a,i,n);
  }
 return 0;
}
