#include<stdio.h>
int vowle()
{
    int c=0,count=0,s[100];
    printf("INPUT \n");
    gets(s);
    while (s[c]!='\0')
    {
        if(s[c]=='a'||s[c]=='A'||s[c]=='e'||s[c]=='E'||s[c]=='i'||s[c]=='I'||s[c]=='o'||s[c]=='O'||s[c]=='u'||s[c]=='U')

            count++;

        }

    printf("%d\n",count);
}
int main()
{
    vowle();
    vowle();
}
