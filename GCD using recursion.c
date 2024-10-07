#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int num1,num2,result;
    printf("enter the two number");
    scanf("%d\n %d",&num1,&num2);
    result=gcd(num1,num2);
    printf("THE GCD OH %d AND %d = %d",num1,num2,result);
    return 0;
}
