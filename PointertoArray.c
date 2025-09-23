#include<stdio.h>
void main()
{
    int arr[]={1,2,3};
    int *ptr=arr;
    printf("\nArr %d",arr);
    printf("\nPtr %d",ptr);
    printf("\nArr %d",*arr);
    printf("\nPtr %d",*ptr);
     ptr++;
     printf("\nPtr %d",*ptr);


}
