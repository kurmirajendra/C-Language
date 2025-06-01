
#include<stdio.h>

int main()
{
    int arr[50],i,n,sum=0,average;
    printf("Enter number of element in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    average=sum/n;
    printf("Average of array elements is:%d",average);
}
