#include<stdio.h>
int sum();
int main()
{
    int result;
    result=sum();
    printf("%d",result);
}
int sum()
{
    int a=10;
    int b=30;
    printf("ADD TWO NUMBERS\n");
    return a+b;
}
