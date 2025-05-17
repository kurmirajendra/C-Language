#include<stdio.h>
int main()

{
    int num,or,temp,digit,count=0,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    or=num;
    temp=num;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp=num;
    while(temp!=0){
        digit=temp%10;

    int power=1;
    for(int i=1;i<=count;i++){
        power*=digit;
    }
      sum+=power;
      temp/=10;

    }
    if(sum==or)
        printf("%d is an Armstrong number:\n",or);
    else
      printf("%d is not  an Armstrong number:\n",or);

}
