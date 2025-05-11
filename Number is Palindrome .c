#include<stdio.h>
int main()
{
    int num,reversed=0,original,digit;
    printf("Enter  a number: ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        digit=num%10;
        reversed=reversed*10+digit;
        num/=10;
    }
    if(original==reversed){
        printf("The number is a palindrome.\n");
    }
    else{
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
