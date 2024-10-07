# include<stdio.h>
int main()
{
    int n,i;
    float sum=0,average;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        float num;
        printf("Enter the value %d :",i+1);
        scanf("%d",&num);
        sum+=num;
        }
        average=sum/n;
        printf("the average number:%.2f\n",average);
    return 0;
}
