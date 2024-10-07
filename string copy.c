#include<stdio.h>
#include<string.h>
int main()
{
  char s1[] = "hello world " , tempvariale;
  char s2[50];
  tempvariale=strcpy(s2,s1);

  printf("%s\n",s2);
  return 0;
  }
