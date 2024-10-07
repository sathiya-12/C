#include<stdio.h>
int main()
{
    int n=5,i;
    int arr[]={11,12,13,14,15};
    int *ptr=&arr;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*ptr);
        ptr++;

    }
}
