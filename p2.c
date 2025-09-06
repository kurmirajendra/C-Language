#include<stdio.h>
int *max(int *x, int *y)
{
    if(*x>*y)
        return x;
    else
        return y;

}
void main()
{
    int a=1000,b=900,*c;
    int *aptr,*bptr;
    aptr=&a;
    bptr=&b;
    c=max(&a,&b);
    if(c==aptr)
        printf("\n1st number is Bigger ");
    else
        printf("\n2nd number is Bigger ");

}
