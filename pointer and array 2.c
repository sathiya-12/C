 #include<stdio.h>
 int main()
 {
     int i;
     int arr1[]={1,3,6,8};
     int arr2[]={2,7,0};
     int arr3[]={3,8,9};
     int*ptr[3]={arr1,arr2,arr3};
          for(i=0;i<3;i++)
     {
        printf("%d\n",*ptr[i]);

 }
 }
