#include<stdio.h>
int fibOptimized(int n)
{
    if(n<=1)
        return n;
    int a =0,b=1,c=0;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
void main()
{
    int n=10;
    printf("\n F(%d) = %d ",n,fibOptimized(n));
    printf("\nFibonacci series till %d : ",n);
    for(int i=0;i<=n;i++)
    {
        printf("\n %d ",fibOptimized(i));
    }
}
