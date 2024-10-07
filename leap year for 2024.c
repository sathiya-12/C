#include<stdio.h>
int main()
{
  int year ;
  printf(" ENTER THE LEAP YEAR :");
  scanf("%d",&year);
  (year%4==0 && year%100!=0)||(year%400==0)?
	  printf("%d is a leap year\n",year):printf("%d is a not a leap year\n",year);
  return 0;
}
