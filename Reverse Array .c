#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],i;
    int index=0;
    for(i=0;i<5;i++)
    {
        printf("\nEnter elements in array ");
        scanf("%d",&arr1[i]);
    }
    for(i=4;i>=0;i--)
    {
        arr2[index++]=arr1[i];
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d",arr2[i]);
    }
}
