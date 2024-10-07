 # include<stdio.h>
int main()
{
    int n,temp,r,sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
    sum= (sum*10)+r ;
    n=n/10;
    }

    if (temp==sum)
    {
        printf("THE NUMBER IS PALINDROME");
    }
    else
    {
        printf("THE NUMBER IS NOT PALINDROME ");
    }
    return 0;
}
