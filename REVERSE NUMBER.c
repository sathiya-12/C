# include<stdio.h>
int main()
{
    int n,reverse,r;
    printf("Enter the number :");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("REVERSE NUMBER = %d",reverse);
    return 0;
}
