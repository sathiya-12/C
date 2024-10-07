# include<stdio.h>
int main()
{
    int a=10;
    int *p1=&a;
    int **p2=&p1;
    printf("pointer 1 %d\n",p1);
    printf("pointer 2 %d\n",p2);
    printf("pointer 1 value : %d\n",*p1);
    printf("pointer 2 value : %d\n",*p2);
}
