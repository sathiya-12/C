#include<stdio.h>
int linearsearch(int a[],int size,int key)
{
    if(size==0)
    {
        return -1;
    }
    if(a[size-1]==key)
    {
        return size-1;
    }
    return linearsearch(a,size-1,key);
}
int main()
{
    int a[10]={1,2,3,4,5};
    int key=5;
    int index=linearsearch(a,sizeof(a)/sizeof(int),key);
    if(index==-1)
    {
        printf("ELEMENT NOT FOUND");
    }
    else{
        printf("ELEMENT FOUND %d",index);
    }
    return 0;
}
