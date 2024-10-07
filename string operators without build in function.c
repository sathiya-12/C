#include<stdio.h>
int stringlenght(char str[])
{
    int len = 0;
    while (str[len]!='\0')
    {
        len++;
    }
    return len;
}
void stringcopy(char a[],char b[])
{
    int i=0;
    while (a[i]!='\0'){
    b[i]=a[i];
    i++;
    }
    b[i]='\0';
}


void stringlower(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }

}
    void stringupper(char str[])
{
     int i=0;
    while (str[i]!='\0')
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }

}
int main()
{
    char str1[10]="sathiya",str2[10]="sandhiya";
    char strcopied[100];
    printf(" STRING LENGHT :");
    printf(" string lenght 1 :%d\n ",stringlenght(str1));
    printf(" string lenght 2 :%d\n ",stringlenght(str2));
    printf(" STRING COPY");
    stringcopy(str1,strcopied);
    printf("%s\n",strcopied);
    printf("LOWER STRING");
    stringlower(str1);
    printf("lower string 1:%s\n",str1);
    stringlower(str2);
    printf("lower string 2:%s\n",str2);
    printf("UPPER STRING");
    stringupper(str1);
    printf("upper string 1:%s\n",str1);
    stringupper(str2);
    printf("upper string 2:%s\n",str2);

}

