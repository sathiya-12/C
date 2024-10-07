# include<stdio.h>
int main()
{
  int n=5;
  int arr[]={23,34,45,56,78};
  int *ptr=&arr;
  int i;
  for (i=0;i<n;i++)
  {
      printf("%d\n",ptr);
      ptr++;
  }
}
