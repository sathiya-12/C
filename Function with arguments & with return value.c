#include<stdio.h>
int sum(int,int);
int main()
{
   int a=10;
    int b=20;
    int result;
    result=sum(a,b);
    printf("ADD TWO NUMBERS\n");
    printf("%d",result);

    }
    int sum(int a,int b)
    {

        return a+b;
    }
