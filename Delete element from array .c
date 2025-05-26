#include<stdio.h>
int main()
{
    int arr[50],n,i,pos;
    printf("Enter elements in array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter position to delete(0 to %d )",n-1);
    scanf("%d",&pos);

    if(pos<0||pos>=n){
        printf("\nInvalid position: ");
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;

        printf("Array after Deletion:\n");
        for(i=0;i<n;i++)
            printf("%d\n",arr[i]);
    }
    return 0;
}
