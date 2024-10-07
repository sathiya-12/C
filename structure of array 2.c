
#include <stdio.h>
struct student
{
    char name[45];
    int roll;
    float mark[5];
    double total;
    int average;
};
int main()
{
    struct student s[5];
    int i,j;
    for (i = 0; i < 5; i++)
    {
        printf("ENTER NAME :\n");
        scanf("%s", s[i].name);
        printf("ENTER ROLL NUMBER : \n");
        scanf("%d", &s[i].roll);
        printf("ENTER MARK :");
        for(j=0;j<5;j++)
        {
            scanf("%f", &s[i].mark);
        }
        s[i].total = s[i].total+s[i].mark[j];
        printf("DISPLAYING THE INFORMATION \n");
        for (i = 0; i < 5; i++)
        {
            printf("NAME : %s\n", s[i].name);
            printf("ROLL NUMBER : %d\n", s[i].roll);
            for(j=0;j<5;j++)
           {

            printf("MARK : %f\n", s[i].mark);
           }
            printf("TOTAL MARK : %lf\n", s[i].total);
            s[i].average = s[i].total / 5;
            printf("AVERAGE : %d\n", s[i].average);
        }
    }
    return 0;
}
