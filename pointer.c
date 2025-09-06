#include<stdio.h>
int* sum(int *p1,int *p2)
{
    int res= *p1+*p2; 
    int *p=&res;
    return p;
}
void main()
{
    int a=10,b=20,*c;
    int *p1,*p2;o
    p1=&a;
    p2=&b;
    c=sum(p1,p2);
   printf("\nSum is %d",*c);

}
