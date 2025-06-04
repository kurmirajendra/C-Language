#include<stdio.h>
int main()
{
     int num,i;


     printf("Enter number ");
     scanf("%d",&num);


     printf("\nFactors of the %d aare ",num);

     for(i=2;i<num;i++)
     {
         if(num%i==0)
            printf(" %d ",i);
     }
     return 0;

}
