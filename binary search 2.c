#include<stdio.h>
# include<stdlib.h>
void BinarySearch(int a[],int num,int first,int last)
{
    int mid;

    if(first >= last)
    {
        printf("ELEMENT CANNOT BE FOUND");
    }


        mid=(first+last)/2;

        if(a[mid]==num)
        {
           printf("THE ELEMENT FOUND IN INDEX AT %d",mid);
           exit(0);
        }
        else if(a[mid]>num)
        {
            BinarySearch(a,num,first,mid-1);
        }
        else
        {
            BinarySearch(a,num,mid+1,last);
        }

}
void main()
{
    int a[50],beg,end,i,n,num;
    printf("ENTR THE NUMBER OF ELEMENT");
    scanf("%d",&n);
    printf("ENTER THE VALUE :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    beg=0;
    end=n-1;
    printf("enter the search element :\n");
    scanf("%d", num);

    BinarySearch(a,num,beg,end);

}
