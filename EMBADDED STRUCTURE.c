#include<stdio.h>
struct student
{int a;
float b;
};
struct college
{
    int c;
    char name;
};
void main()
{
    struct student s={1,1.5};
    struct college d={2,};
    printf("%d %f",s.a,s.b);
    printf(" %d %f",d.c,d.name);
}
