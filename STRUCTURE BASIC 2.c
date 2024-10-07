#include<stdio.h>
struct student
{
  int rollno;
  char name[20];
  float marks;
}  s1={2,"dhivya",100},
   s2={3,"shobi",90};

void main()
{
    struct student s={1,"sathiya",100};
    printf("%d %s %f",s.rollno,s.name,s.marks);
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
    printf("%d %s %f",s2.rollno,s2.name,s2.marks);
}

