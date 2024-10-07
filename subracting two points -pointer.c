#include <stdio.h>
int main()
{
    int a=10,b=20,c=44;
    int *x=&a,*y=&b,*z=&c;
    printf("Address of pointer 1 : %d\n",x);
    printf("Address of pointer 2 : %d\n",y);
    printf("address of pointer 3 : %d\n",z);
    printf("Pointer 1 - Pointer 2 : %d\n",x-y);
    printf("Pointer 2 - Pointer 1 : %d\n",y-x);
    printf("pointer 1 - pointer 3 : %d\n",x-z);
    return 0;
}
