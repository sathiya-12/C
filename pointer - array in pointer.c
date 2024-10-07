# include<stdio.h>
int main()
{
    int arr1[]={12,23,45,56};
    int arr2[]={90,78,56,45};
    int arr3[]={45,78,12,90};
    int *ptr[3]={arr1,arr2,arr3};
    for(int i=0;i<3;i++)
    {
       printf("%d\n",*ptr[i]);
    }

}
