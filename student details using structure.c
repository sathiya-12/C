#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks[5];
};
int main()
{
    struct student s;
    int i;
    printf("Enter Name :\n ");
    scanf("%s",&s.name);
    printf("Enter roll number :\n");
    scanf("%d",&s.roll);
    printf("Enter marks\n");
    for(i=0;i<5;i++)
    {
        printf("subiect %d\n",i+1);
        scanf("%f",&s.marks[i]);
    }
    printf("Display the information");
    printf("Name :%s\n",s.name);
    printf("Roll Number :%d\n",s.roll);
    printf("Marks:\n");
    for(i=0;i<5;i++)
    {
        printf("Subject %d: %f\n",i+1,s.marks[i]);
    }
    return 0;
}
