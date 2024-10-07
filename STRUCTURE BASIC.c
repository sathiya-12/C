#include<stdio.h>
struct student
{
  int rollno;
  char name[20];
  float marks;
} ;
void main()
{

    struct student s1={1,"sathiya",100};
    struct student s2={1,"sathya",100};
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
    printf("%d %s %f",s2.rollno,s2.name,s2.marks);
}


