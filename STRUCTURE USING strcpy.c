#include<stdio.h>
struct student
{
    char name[67];
    int roll;
};
int main()
{
   struct student s1;
    strcpy(s1.name,"sathiya");
    s1.roll=45;
    printf("NAME :%s\n",s1.name);
    printf("ROLL NUMBER :%d",s1.roll);
}
