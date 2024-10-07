#include<stdio.h>
struct student
{
  int rollno;
  char name[78];
};
struct college
{
    char collegename[67];
    int tutionfees;
    };
    void main()
    {
        struct student s={23,"sathiya"};
        struct college d={"rathinam",150000};
        printf("\n %d \n%s",s.rollno,s.name);
        printf("\n %s \n%d",d.collegename,d.tutionfees);
    }
