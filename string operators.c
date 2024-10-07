#include<stdio.h>
#include<stdio.h>
int main()
{
    char name[50],copy[50];
    printf("enter the string name :");
    scanf("%s",&name);
    printf("String lenght : %d\n",strlen(name));
    printf("String copy : %s\n",strcpy(copy,name));
    printf("String compare : %d\n",strcmp(copy,name));
    printf("String concatenated :%s\n",strcat(name,copy));
    printf("String lower : %s\n",strlwr(name,copy));
    printf("String upper : %s\n",strupr(name,copy));
    printf("String reverse :%s\n",strrev(copy));
}
