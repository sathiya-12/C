#include<stdio.h>
int main()
{
  int arrears;
  float tenth_percentage,twelth_percentage;
  printf(" enter the how many arrears: \n");
  scanf("%d",&arrears);
  printf(" enter the tenth percentage: \n");
  scanf(" %f",&tenth_percentage);
  printf(" enter the twelth precentage:\n");
  scanf(" %f",&twelth_percentage);
  if (arrears==0)
  {
    if (tenth_percentage>=70)
   {
      if (twelth_percentage>=60)
      {
        printf("you are eligible");
      }
      else
        {
          printf(" you not eligible for twelth percentage");
        }
   }
    else
        {
            printf(" you are not eligible for tenth percentage");
        }
  }
   else
        {
          printf("you have arrears");
        }
return 0;
  }
