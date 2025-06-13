#include<stdio.h>
int getSumofNegativeno(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}
void main()
{
    int arr[]={-1,2,3,-4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=getSumofNegativeno(arr,size);
    printf("\nSum of Negative Numbers : %d\n\n",result);
}
