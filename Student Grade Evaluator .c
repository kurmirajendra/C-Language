#include<stdio.h>
void main()
{
    int marks;
    printf(" Enter marks between 0 to 100\n ");
    scanf("%d",&marks);
    if(marks>0 && marks<=100)
    {
         if(marks>90 && marks<=100)
        {
            printf("\nYour Grade is A+ ");
        }
       else if(marks>75 && marks<=90)
        {
            printf("\nYour Grade is A ");
        }
      else if(marks>65 && marks<=75)
        {
            printf("\nYour Grade is B ");
        }
       else if(marks>55 && marks<=65)
        {
            printf("\nYour Grade is C ");
        }
       else if(marks>=33 && marks<=55)
        {
            printf("\nYour Grade is D ");
        }
       else if(marks<33)
        {
            printf("\n You are fail Try Again ");
        }
    }
    else
        printf("\n Invalid Marks Please enter marks between 0 to 100 ");
}
