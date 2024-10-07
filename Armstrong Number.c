# include<stdio.h>
int main()
{
    int temp,n,r,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (temp==sum)
    {
        printf("THE GIVEN NUMBER IS ARMSTRONG NUMBER");
    }
    else
    {
        printf("THE GIVEN NUMBER IS NOT ARMSTRONG NUMBER");
    }
    return 0;
}
