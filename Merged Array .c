#include<stdio.h>
int main()
{
    int arr[20],arr2[20],arr3[40];
    int n1,n2,i,j;
    printf("Enter number of elements in 1st array: ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter number of elements in 2nd array ");
    scanf("%d",&n2);

    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<n1;i++)
    {
        arr3[i]=arr[i];
    }
    for(j=0;j<n2;j++)
    {
        arr3[i+j]=arr2[j];
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\n",arr3[i]);
    }
    return 0;

}
