#include<stdio.h>
struct student
{
    char name[45];
    int roll;
    float mark;
    double total;
    int average;
};
void main()
{
  struct student s[5];
  int i;
  printf("enter the information \n");
  for(i=0;i<5;i++)
{
    printf("ENTER NAME :\n");
    scanf("%s",&s[i].name);
    printf("ENTER ROLL NUMBER : \n");
           scanf("%d",&s[i].roll);
           printf("ENTER MARK :");
           scanf("%f",&s[i].mark);

}
printf("DISPLAYING THE INFORMATION \n");
for(i=0;i<5;i++)
{
    printf("NAME : %s\n",s[i].name);
    printf("ROLL NUMBER :%d\n",s[i].roll);
    printf("MARK :%f\n",s[i].mark);

}
}

