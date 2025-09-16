#include<stdio.h>
void main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr;
    for(int i=0;i<5;i++)
    {
        ptr=&arr[i];
        printf("\nValue at %d is %d ",ptr,*ptr);
    }
}
