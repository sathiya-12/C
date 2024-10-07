#include<stdio.h>
struct student
{
    char name[45];
    int roll;
    float mark[10];
    double total;
    int average;
};
void main()
{
  struct student s[5];
  int i,j;
  printf("enter the information \n");
  for(i=0;i<5;i++)
{
    printf("ENTER NAME :\n");
    scanf("%s",&s[i].name);
    printf("ENTER ROLL NUMBER : \n");
           scanf("%d",&s[i].roll);
           printf("ENTER MARK :");
           for(j=0;j<10;j++)
           {
               scanf("%f",&s[i].mark[j]);
           }

}
printf("DISPLAYING THE INFORMATION \n");
for(i=0;i<5;i++)
{
    printf("NAME : %s\n",s[i].name);
    printf("ROLL NUMBER :%d\n",s[i].roll);
    for(j=0;j<10;j++)
        {
            printf("MARK :%f\n",s[i].mark[j]);





        }



}
}


