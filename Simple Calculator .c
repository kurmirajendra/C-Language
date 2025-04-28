#include<stdio.h>
void main()
{
    float num1,num2;
    char c;
    printf("Enter 1st number");
    scanf("%f",&num1);

    printf("Enter an operator (+,-,*,/)");
    scanf(" %c",&c);

    printf("Enter 2nd number");
    scanf("%f",&num2);
    if(c=='+')
    {
        printf("Result=%.2f\n",num1+num2);
    }
    else
    {
        if(c=='-')
        {
            printf("Result = %.2f\n",num1-num2);
        }
        else
        {
            if(c=='*')
            {
                printf("Result = %.2f\n",num1*num2);

            }
            else
            {
                if(c=='/')
                {
                    if(num2!=0){
                        printf("Result = %.2f\n",num1/num2);
                    }
                    else
                    {
                        printf("Error Division by zero is not allowed\n ");
                    }
                } else
                     {
                         printf("Invalid operator entered ");
                     }
            }
        }
    }
}
