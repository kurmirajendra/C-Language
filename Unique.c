#include<stdio.h>
int getUniqueno(int arr[],int size)
{
    printf("\nUnique elements : ");
    for(int i=0;i<size;i++)
    {
        int isunique=1;
        for(int j=0;j<size;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                isunique=0;
                break;
            }


        }
        if(isunique==1)
        {
            printf("%d ",arr[i]);
        }
    }
}
void main()
{
    int arr[]={4,5,6,4,7,8,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nArray :");
    for(int i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    getUniqueno(arr,size);

}
