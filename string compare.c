 #include<stdio.h>
#include<string.h>
int main()
{
  char temp_variable;
  char s1[]= "hey good boy";
  char s2[]= "hey good boy";
  if(temp_variable=strcmp(s1,s2)==0)
  {
      printf("the strings are equal");
  }
  else
  {
      printf("the strings are not equal");
  }
  return 0;
   }
