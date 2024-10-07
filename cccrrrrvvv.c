#include<stdio.h>
void swapbyvalue(int a,int b,int *x,int *y);
void swapbyreference(int *a,int *b);
int main()
{
    int num1=3,num2=4;
    printf("enter the two number :%d\n");
    printf("Before swaping");
    printf("Number 1= %d\n Number 2= %d\n",num1,num2);
    swapbyvalue(num1,num2,&num1,&num2);
    printf("After swaping");
    printf("Number 1 = %d\n Number 2 = %d\n",num1,num2);
    swapbyreference(&num1,&num2);
    printf("After swaping");
    printf("Number 1 = %d\n Number 2 = %d\n",num1,num2);
    return 0;
}
void swapbyvalue(int a,int b,int *x,int *y)
{

    a=*y;
    b=*x;
}
void swapbyreference(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
