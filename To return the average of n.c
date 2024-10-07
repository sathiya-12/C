# include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,sum,average;
    printf("Enter the number :");
    scanf("%d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6);
    sum=n1+n2+n3+n4+n5+n6;
    average=sum/6;
    printf("Enter the average number :");
    printf("%d",average);
    return 0;
}
