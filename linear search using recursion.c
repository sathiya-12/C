# include<stdio.h>
int linearsearch(int a[],int size,int key)
{
    if(size==0)
    {
        return -1;
    }
    if(a[size-1]==key )
    {
        return size-1;
    }
    return linearsearch(a,size-1,key);
}
int main()
{
    int a[]={10,20,30,45,56};
    int key=45;
    int index=linearsearch(a,sizeof(a)/sizeof(int),key);
    if(index==-1)
    {
        printf("The element not found");
    }
    else
    {
        printf("The element %d found at %d\n",key,index);
    }
    return 0;
}
