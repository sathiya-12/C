#include<stdio.h>
struct person
{
    int age;
    float weight;
};
int main()
{
    struct person person1;
    struct person *ptr=&person1;
    printf(" ENTER THE AGE :");
    scanf("%d",&ptr->age);
    printf("ENTER THE WEIGHT :");
    scanf("%f",&ptr->weight);
    printf("DISPLAY THE INFORMATION \n");
    printf("AGE :%d\n",ptr->age);
    printf("WEIGHT :%f\n",ptr->weight);
}
