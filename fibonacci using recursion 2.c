#include<stdio.h>
int Fibonacci(int n)
{
    static int n1=0, n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
        Fibonacci(n-1);
    }

}
int main()
{
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    printf(" FIBONACCI SERIES : %d %d",0,1);
    Fibonacci(n-2);
    return 0;
}
