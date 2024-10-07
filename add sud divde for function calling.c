# include<stdio.h>
int sum();
int main()
{
    int c,d,e,g;
    c=sum();
    d=sum();
    e=sum();
    g=sum();
}
int sum()
{
    int a,b,c,d,e,g;
    printf("Enter the number :");
    scanf(" %d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a/b;
    g=a%b;
    printf("%d\n %d\n %d\n %d\n",c,d,e,g);
    return 0;
}
