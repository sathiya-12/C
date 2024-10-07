#include<stdio.h>
int main()
{
    int n,arr[23],i;
    float sum=0.0,average;
    printf("enter the element of number : ");
    scanf("%d",&n);
    printf("Enter %d index :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    for(i=0;i<n;i++)
    {
                sum+=*(ptr+i);
    }
    average=(sum/n);

    printf("Average :%f\n",average);
    return 0;

}
