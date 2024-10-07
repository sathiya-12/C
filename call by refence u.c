#include<stdio.h>
void swap(int *num1,int *num2);
int main()
{
    int num1,num2;
    printf("ENTER TWO NUMBER ");
    scanf("%d %d",&num1,&num2);
     printf("print before swaping");
     printf("number 1= %d\n",num1);
     printf("number 2= %d\n",num2);
     swap(&num1,&num2);

     printf("dispaly after swaping");
     printf("number 1= %d\n",num1);
     printf("number 2= %d\n",num2);
     return 0;
}
void swap(int* num1,int* num2)

{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
