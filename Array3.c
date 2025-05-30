#include<stdio.h>
int main()
{
    int arr[50],i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements in reverse order: \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
