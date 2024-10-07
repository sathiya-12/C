# include<stdio.h>
int sum();
int main()
{
    int c;
    sum();
    c=sum();
    printf(" %d ",c);
}
int sum()
{
    int a,b,c;
    printf("\nEnter the number: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
    return 0;
}
