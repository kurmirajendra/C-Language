#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your  Age ");
    scanf("%d",&age);
    if(age>0)
    {
        if(age>=18)
        {
            printf("\nYou are eligible to vote ");

        }
        else
            printf("\nYou are not eligible to vote.Please wait for %d more years\n",18-age );
    }
    else
        printf("\nInvalid age entered!Age can not be zero or negative ");
}
