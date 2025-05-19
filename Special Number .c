#include<stdio.h>
int main()
{
    int num,i,temp,sum1=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    sum1=temp/10;
    int sum2=temp%10;
    int res=(sum1+sum2)+(sum1*sum2);
    if(res==num)
        printf("%d is special number:\n",num);
    else
        printf("%d is not a special number:\n",num);


}
