#include<stdio.h>
struct student
{
  int rollno;
  char name[78];
}s;
struct college
{
    char collegename[67];
    int fees;
    }d;
    void main()
    {
        printf("\n roll number: %d ",s.rollno);
        scanf("%d,&s.rollno");
        printf("\n Name: %s",d.collegename);
        scanf("%s,&s.name");
        printf("\n College Name: %s",d.collegename);
        scanf("\n College Name:%s,&d.collegename");
        printf("\n Tution fees : %d");
        scanf("%d,&d.fees");
    }
