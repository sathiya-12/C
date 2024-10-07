#include<stdio.h>
int main()
{
  int number,reverse=0;
  printf("ENTER THE FOUR DIGIT NUMBER : ");
  scanf("%d",&number);
  while ( number!=0)
  {
      int digit = number%10;
      reverse = reverse*10+digit;
       number /=10;
  }
    printf("The reverse of number is : %d",reverse);
  }
