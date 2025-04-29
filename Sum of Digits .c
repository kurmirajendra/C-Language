#include<stdio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter a Number ");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("Sum of digits are %d\n",sum);
    return 0;
}
