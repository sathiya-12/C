# include <stdio.h>
int main()
{
    int i,j,temp;
    int a[10]={23,56,78,89,90,67};
    int n;
    printf(" Enter the elemnts :");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        for ( j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
               {

                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
               }
        }
    }
    printf(" enter the number of size :\n");
    for (int i=0;i<a;i++)
    {
        printf("%d\n",a[i]);
    }
}

