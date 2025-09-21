#include<stdio.h>
void main()
{
    int arr[] = {10,20,30,40,50};
    int *ptr[5];
    for(int i=0;i<5;i++)
    {
        ptr[i]=&arr[i];
    }
    for(int i=0;i<5;i++)
    {
        printf("\nValue at %d is %d ",ptr[i],*ptr[i]);
    }
}
