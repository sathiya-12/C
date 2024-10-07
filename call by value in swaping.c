# include<stdio.h>
void swap(int a,int b,int* x,int* y);
int main()
{
    int x=10,y=20;
    printf("enter the two number :");
    printf("%d\n %d\n",x,y);
    printf("before swaping");
    printf("x=%d\n y=%d\n",x,y);
    swap(x,y,&x,&y);
    printf("after swaping");
    printf("x=%d\n y=%d\n",x,y);
}
void swap(int a,int b,int* x,int* y)
{
    * x= b;
    * y= a;
}

