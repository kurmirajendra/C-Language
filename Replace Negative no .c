#include<stdio.h>
int replacenegativeno(int arr[],int size)
{
    for(int i=0;i<size;i++){
        if(arr[i]<0)
        {
            arr[i]=0;
        }

}
}
void getprintarray(int arr[],int size)
{
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
}

void main()
{
    int arr[]={-1,2,-3,4,-5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nOriginal Array\n");
    getprintarray(arr,size);
    replacenegativeno(arr,size);
    printf("\nUpdated Array\n");
    getprintarray(arr,size);

}
