#include<stdio.h>
int main()
{
    int arr1[50],arr2[50],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\nElements copied in second array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr2[i]);

    return 0;
}
