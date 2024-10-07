# include<stdio.h>
int f(int n)
{
if (n==0 ||n==1)
return 1;
else
    return(n*f(n-1));
}
void main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printf("%d",f(n));

}

