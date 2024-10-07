#include<stdio.h>
int main()
{
  int a,b,c;
  printf("PRINT THE LARGEST NUMBER");
  scanf("%d %d %d",&a,&b,&c);
  if ((a>b)&&(a>c))
  printf("THE NUMBER A IS GREATER");
  else if ((b>a)&&(b>c))
  printf("THE NUMBER B IS GREATER");
  else
  printf("THE NUMBER C IS GREATER");
  }
