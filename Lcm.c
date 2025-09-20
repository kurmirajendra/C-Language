#include<stdio.h>
int GCD( int a, int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;

}
int Lcm(int a,int b)
{
    return (a*b)/GCD(a,b);
}
void main()
{
    int a=12,b=18;
    int gcdValue=GCD(a,b);
    int lcmValue=Lcm(a,b);
    printf("Numbers a= %d and b=%d ",a,b);
    printf("\nGCD = %d ",gcdValue);
    printf("\nLCM = %d ",lcmValue);
}
