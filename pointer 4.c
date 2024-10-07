#include<stdio.h>
void main()
{
    int i,n=5;
    int arr[]={1,2,3,4,5};
    int *ptr=&arr;
    for(i=0;i<n;i++){
    printf("%d",*ptr);
    ptr++;
    }
}
