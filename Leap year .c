#include<stdio.h>
void main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year>0)
    {
        if(year%4==0)
        {
            if(year%100==0)
            {
                if(year%400==0)
                {
                    printf("\n%d is leap year \n",year);
                }
                else
                {
                    printf("\n%d is not a leap year \n",year);
                }
            } else
            {
                printf("\n%d is leap year \n",year);
            }
        } else
        {
            printf("\n%d is not a leap year\n ",year);
        }

    } else
      {
        printf("\nInvalid input ,Enter positive year \n");
      }
}
