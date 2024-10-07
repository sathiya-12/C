#include<stdio.h>
int main()
{
    int a=30,*ptr=&a;
    *ptr=40;
    printf("%d",a);
}
