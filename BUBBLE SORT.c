
#include<stdio.h>
int bubblesort(int arr[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
}
int main()
{
int arr[]={13,78,90,89,67};
int n=sizeof(arr)/sizeof(arr[0]);
int i;
printf("array before sorting:\n");
for(i=0;i<n;i++)
{
printf("%d", arr[i]);
}
bubblesort(arr,n);

printf("\narray after sorting:\n");
for(i=0;i<n;i++)
{
printf("%d", arr[i]);
}
return 0;
}
