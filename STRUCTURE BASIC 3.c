#include<stdio.h>
struct student
{
    char name[45];
    int roll;
    float mark;
}s1={"sathiya",45,100};
void main()
{
    struct student s2={"maha",23,100};
    printf("%s\n %d\n %f\n",s1.name,s1.roll,s1.mark);

   printf("%s\n %d\n %f\n",s2.name,s2.roll,s2.mark);
}
