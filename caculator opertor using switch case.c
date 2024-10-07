#include<stdio.h>
void main()
{
    int choice;
    double num1,num2,result;
    printf("ENTER THE NUMBER 1 :\n");
    scanf("%lf",&num1);
    printf("ENTER THE NUMBER 2 \n:");
    scanf("%lf",&num2);
    printf("SELECT THE OPERATORS \n");
    printf("1. ADDITION\n ");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISOR\n");
    printf("5. MODULUS\n");
    printf("6. SQUARE\n");
    switch (choice)
    {
        case 1:
        result=num1+num2;
        printf("Result: %lf\n",result);
        break;
        case 2:
            result=num1-num2;
            printf("Result :%lf\n",result);
            break;
        case 3:
            result=num1*num2;
            printf("Result :%lf\n",result);
            case 4:
                if(num2!=0)
                {
                   result=num1/num2;
                   printf("Result :%lf\n ",result);
                }
            else
            {
                printf("cannot divide by zero \n");
            }
            break;
            case 5:
                result= fmod(num1,num2);
                printf("Result : %lf\n",result);
            break;
            case 6:
                result= pow(num1,2);
                printf("Square of num1 %lf : %lf\n",num1,result);
                result= pow(num2,2);
                printf("Square of num2 %lf : %lf\n",num2,result);
                break;
            default :
                printf("Invalid Operators");

    }
}

