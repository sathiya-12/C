#include<stdio.h>
void swap(int*,int*);
int main()
{

     int a=5,b=10;
     printf("a=%d\n,b=%d\n",a,b);
     swap(&a,&b);

}
void swap(int *x,int *y)
{

     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
     printf("after swap: x=%d\n,y=%d\n",*x,*y);
}
