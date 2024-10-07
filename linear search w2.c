# include<stdio.h.>
int main()
{
    int a[10],i,target_element,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the target element :");
    scanf("%d",&target_element);
    for (int i=0;i<n;i++)
    {
        if(a[i]==target_element)
        {
            printf("Element found %d");
             break;
        }
    }

      if(a[i]!=target_element)
    {
        printf("Element not found ");
    }

    return 0;
}

