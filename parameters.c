# include<stdio.h>
int sum(int x,int y)
{
    int c;
    c=x+y;
    return c;
}
int main()
{
    int a=3,b=8,c;
    c=sum(a,b);
    printf("%d",c);
}
