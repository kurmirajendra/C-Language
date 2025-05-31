#include<stdio.h>

int main()
{
    int arr[50],i,n,value,found=0;
    printf("Enter elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(arr[i]==value){
            found=1;
            break;
        }
    }
    if(found)
        printf("Element %d found at position %d\n",value,i+1);
    else
        printf("Element %d not found in the array\n",value);
}
