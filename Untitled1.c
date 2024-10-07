#include <stdio.h>
struct student
 {  
    char name[50];
    int roll;
    float marks[3];
    float average;
    float sum;
 };
 int main()
 {
     struct student s[5];
     int i,j;
     for(i=0;i<5;i++)
        {
          scanf("%s\n",s[i].name);
          scanf("%d\n",s[i].roll);
     printf("Enter the marks");
     for(j=0;j<3;j++)
     {
         scanf("%f",s[i]marks[j]);
         for(i=0;i<5;i++)
         {
             s[i].sum=0;
             for(j=0;j<3;j++)
             {
                 s[i].sum+=s[j].marks;
             }
             s[i]average=s[i].sum/3;
         }

     }
     printf("Display the information");
     for(i=0;i<5;i++)
     {
         printf("Name %s\n",s[i].name);
         printf("Rol number %d\n",s[i].roll);
         printf("Marks %f,average %f ",s[i].marks[j],s[i].average);
     }
 }
