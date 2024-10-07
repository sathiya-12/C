#include<stdio.h>
int main()
{
   int rating;
   printf("Enter the rating: ");
   scanf("%d",&rating);
   if(rating<2)
   {
      printf("Not Recommended");
      }
   else if((rating>=2)&&(rating<=4))
      {
        printf("Recommended");
        }
   else
       {
        printf("Highly Recommended");
         }
 return 0;
         }
